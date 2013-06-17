#include "heap.h"

void heapify( int * array, int array_len, int heap_size, int start_index )
{
  int parent = start_index /2;
  int left = (start_index * 2) -1;
  int right = start_index * 2;

  printf( "parent:%d, left:%d, right:%d\n", parent, left, right );

  /*  first we figure out which node has the hightest
      value. we store this in the variable: max */
  int max = (left <= heap_size && array[left] > array[start_index])
              ? left
              : start_index;

  if (right <= heap_size && array[right] > array[max])
    max = right;

  /*  we want the start_index to be the biggest, 
      if it's not, then we keep recursing until it is. */
  if (array[max] != array[start_index])
  {
    int key = array[start_index];
    array[start_index] = array[max];
    array[max] = key;

    print_number_array( array, array_len );
    heapify( array, array_len, heap_size, max );
  }
}


void heap_sort( int * array, int array_len, int heap_size )
{
  printf( "heap sort\n" );
  printf( "=========\n" );
  print_number_array( array, array_len );

  heapify( array, array_len, heap_size, 1 );


  print_number_array( array, array_len );
}
