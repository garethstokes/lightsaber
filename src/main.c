#include "lightsaber.h"
#include "sorting/insertion.h"
#include "sorting/merge.h"
#include "sorting/bubble.h"
#include "sorting/heap.h"

int main() {
  int i = 0;

  /* int numbers[] = { 4, 7, 9, 2, 5, 1, 8, 6, 3 }; */
  /* int numbers[] = { 4, 7, 9, 2, 5, 1, 8, 6 }; */
  int numbers[] = { 5, 1, 8, 6, 4, 7, 9, 2, 3 };

  /* 
    params
      1) the unsorted array
      2) the length of array
    insertion_sort(numbers, 9); 
  */
  /* merge_sort(numbers, 9, 0, 8); */
  /* bubble_sort( numbers, 9 ); */

  /* params
      1) the unsorted array
      2) the length of the array
  */
  heap_sort( numbers, 9 );

  return(0);
}
