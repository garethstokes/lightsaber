#include "heap.h"
#include <math.h>

/*
  
  { 5, 1, 8, 6, 4, 7, 9, 2, 3 }

            5
        1       8
    6     4   7     9
  2   3

*/

void heapify( int * array, int array_len, int heap_size, int start_index )
{
  int left = ((start_index) * 2) -1;
  int right = (start_index)* 2;
  start_index = start_index -1;

  int max = (left < heap_size && array[left] > array[start_index])
              ? left
              : start_index;

  if (right < heap_size && array[right] > array[max])
    max = right;

  if (max != start_index)
  {
    /* swap max with start_index and keep going down */
    printf( "swapping out %d for %d\n", array[start_index], array[max] );
    int key = array[start_index];
    array[start_index] = array[max];
    array[max] = key;

    heapify( array, array_len, heap_size, max +1 );
  }
}

void build_heap( int * array, int array_len, int heap_size )
{
  int i = (heap_size /2) +1;
  printf( "heap size:%d\n", heap_size);

  while (i > 0)
  {
    heapify( array, array_len, heap_size, i );
    i = i -1;
  }
}

void heap_sort( int * array, int array_len )
{
  printf( "heap sort\n" );
  printf( "=========\n" );
  print_number_array( array, array_len );

  int i = 0;
  int heap_size = array_len;
  build_heap( array, array_len, heap_size );

  while (heap_size > 1)
  {
    /* swap array[0] with array[heap_size -1] */
    int key = array[0];
    array[0] = array[heap_size -1];
    array[heap_size -1] = key;

    /* rebuild the heap minus that one we just swapped */
    heap_size = heap_size -1;
    build_heap( array, array_len, heap_size );
  }

  /* we are done, marvel in the array's sorted glory */
  print_number_array( array, array_len );
}
