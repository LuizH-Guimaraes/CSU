#include <iostream>
#include <pthread.h>
#include <time.h>
 
// number of elements in array
#define LEN 80000
 
// number of threads
#define NUM_THREADS 4
 
using namespace std;
 
//Element to show each thread to localize the array part.
int part = 0;

//Structure with information needed to sort the array.
struct SortArrayThreadData {
  long* array;
};
 
// merge function for merging two parts
void merge(long *array, int low, int mid,int high){
  int* left = new int[mid - low + 1];
  int* right = new int[high - mid];

  //Size of each part of the array and indexes I and J, will go through the array
  int sizeLeft = mid - low + 1, sizeRight = high - mid, i, j;

  // storing values in left part
  for (i = 0; i < sizeLeft; i++)
    left[i] = array[i + low];

  // storing values in right part
  for (i = 0; i < sizeRight; i++)
    right[i] = array[i + mid + 1];

  // Initial index of merged subarray array
  int k = low;
  i = j = 0;

  // merge left and right in ascending order
  while (i < sizeLeft && j < sizeRight) {
    if (left[i] <= right[j]){
      array[k] = left[i];
      i++;
    }
    else{
      array[k] = right[j];
      j++;
    }
    k++;
  }

  // insert remaining values from left
  while (i < sizeLeft) {
    array[k] = left[i];
    i++;
    k++;
  }

  // insert remaining values from right
  while (j < sizeRight) {
    array[k] = right[j];
    j++;
    k++;
  }
}
 
// merge sort function
void merge_sort(long *array, int low, int high) {
    // calculating mid point of array
    int mid = low + (high - low - 1) / 2;
    if (low < high) {
 
        // calling first half
        merge_sort(array, low, mid);
 
        // calling second half
        merge_sort(array, mid + 1, high); 
 
        // merging the two halves
        merge(array, low, mid, high);
    }
}
 
void* merge_sort(void* args){
  SortArrayThreadData* data = static_cast<SortArrayThreadData*>(args);
  // which part out of 4 parts
  int thread_part = part++;

  // calculating low and high
  int low = thread_part * (LEN / NUM_THREADS);
  int high = (thread_part + 1) * (LEN / NUM_THREADS) - 1;

  // evaluating mid point
  int mid = low + (high - low) / 2;
  if (low < high) {
    merge_sort(data->array, low, mid);
    merge_sort(data->array, + 1, high);
    merge(data->array, low, mid, high);
  }
}
 
long parallel_sort(int num_threads, long *ary, ssize_t array_size){

  SortArrayThreadData sortData;
  sortData.array= ary;

  pthread_t threads[NUM_THREADS];
  // creating 4 threads to parrallel the mer
  for (int i = 0; i < NUM_THREADS; i++)
    pthread_create(&threads[i], NULL, merge_sort, &sortData);

  // joining all 4 threads
  for (int i = 0; i < NUM_THREADS; i++)
    pthread_join(threads[i], NULL);

  // merging the final 4 parts
  for (int i = 1; i < LEN; ++i) {
    int key = ary[i];
    int j = i - 1;
    while (j >= 0 && ary[j] > key) {
      ary[j + 1] = ary[j];
      j = j - 1;
    }
    ary[j + 1] = key;
  }

  // displaying sorted array
  cout << "Sorted array: \n[";
  for (int i = 0; i < LEN; i++)
    cout << ary[i] << " ";
  cout <<"].\n";

  return 0;
}
// Driver Code
int main(){
  long array[LEN];

  for (int i = 0; i < LEN; i++)
    array[i] = rand() % 100;
 
  cout << "Array Created: \n[";
  for (int i = 0; i < LEN; i++)
    cout << array[i] << " ";
  cout <<"].\n";

  parallel_sort(NUM_THREADS, array, LEN);
 

 
 
    return 0;
}