#include <iostream> 
#include <pthread.h> 


#define NUM_THREAD 4 
int THREAD = 0; 

#define LEN 16 


using namespace std; 

// Data structure to pass arguments to threads
struct SumArraysThreadData {
    long* array1;
    long* array2;
    long* result;
    int start;
    int end;
};

/**
 * Calculates the sum of two arrays in parallel using pthreads.
*/

//function called by sumArrays, it does the sum in each thread.
void* sumArrays(void* args) {
  SumArraysThreadData* data = static_cast<SumArraysThreadData*>(args);
  for (int i = data->start; i < data->end; ++i) {
      data->result[i] = data->array1[i] + data->array2[i];
  }
  pthread_exit(nullptr);
}


long* parallel_sum_array(int num_threads, long *a, long *b, long *c, ssize_t size){

  pthread_t threads[num_threads];
  SumArraysThreadData threadData[num_threads];

  // Create threads and divide the work among them
  int elementsPerThread = size/num_threads;
  for (int i = 0; i < num_threads; i++) {
    threadData[i].array1 = a;
    threadData[i].array2 = b;
    threadData[i].result = c;
    threadData[i].start = i * elementsPerThread;
    threadData[i].end = (i == NUM_THREAD - 1) ? LEN : (i + 1) * elementsPerThread;

    pthread_create(&threads[i], nullptr, sumArrays, &threadData[i]);
  }

  // Wait for all threads to finish
  for (int i = 0; i < NUM_THREAD; i++) {
    pthread_join(threads[i], nullptr);
  }
  return c;
}
 
int main() {
  long a[] = {15, 18, 1, 5, 7,25, 27, 30, 10, 12, 14, 20, 22, 64, 110, 220 }; 
  long b[] = { 2, -1, 16, 12, 10, -8, -10, -13, 7, 5, 3, -3, -5, -47, -93, -203}; 
  long* result = (long*) malloc (LEN * sizeof(long));


  cout << "Array [A]:\n";
  for (int i = 0; i < LEN; i++) {
    cout << a[i] << " ";
  }
  cout << "\nArray [B]:\n";
  for (int i = 0; i < LEN; i++) {
    cout << b[i] << " ";
  }
  parallel_sum_array(NUM_THREAD, a, b, result, LEN);
  cout << "\n\n";
  cout << "Result of Sum of [A] and [B]:\n";
  for (int i = 0; i < LEN; i++) {
    cout << result[i] << " ";
  }


  return 0; 
}