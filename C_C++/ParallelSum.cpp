#include <iostream> 
#include <pthread.h> 


#define NUM_THREAD 4 
int THREAD = 0; 

#define LEN 16 

using namespace std; 

// Data structure to pass arguments to threads
struct SumArrayElementsData {
    long* array;
    int start;
    int end;
    int sum;
};

/**
 * Calculates the sum of array elements in parallel using pthreads.
*/
//function called by sum_array, it does the sum in each thread.
void* parallelSum(void* args) {
  SumArrayElementsData* data = static_cast<SumArrayElementsData*>(args);
  data->sum = 0;
  for (int i = data->start; i < data->end; ++i) {
    data->sum += data->array[i];
  }
  pthread_exit(nullptr);
}

long parallel_sum(int num_threads, long *ary, ssize_t array_size){
  pthread_t threads[num_threads];
  SumArrayElementsData threadData[num_threads];

  // Create threads and divide the work among them
  int elementsPerThread = array_size / num_threads;
  for (int i = 0; i < num_threads; i++) {
    threadData[i].array = ary;
    threadData[i].start = i * elementsPerThread;
    threadData[i].end = (i == num_threads - 1) ? array_size : (i + 1) * elementsPerThread;

    pthread_create(&threads[i], nullptr, parallelSum, &threadData[i]);
  }

  // Wait for all threads to finish
  for (int i = 0; i < NUM_THREAD; ++i) {
    pthread_join(threads[i], nullptr);
  }

  // Accumulate the partial sums calculated by each thread
  long totalSum = 0;
  for (int i = 0; i < NUM_THREAD; ++i) {
    totalSum += threadData[i].sum;
  }

  return totalSum;
}
 
int main() {
long array[] = {15, 18, 1, 5, 7,25, 27, 30, 10, 12, 14, 20, 22, 64, 110, 220 }; 

  cout << "Array [A]:\n";
  for (int i = 0; i < LEN; i++) {
    cout << array[i] << " ";
  }

  cout << "\n\nSum of the elements of [A] is:" << parallel_sum(NUM_THREAD, array, LEN) << endl; 
  return 0; 
}