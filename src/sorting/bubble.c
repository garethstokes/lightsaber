#include "bubble.h"

void bubble_sort( int * array, int array_len )
{
  printf( "bubble sort\n" );
  printf( "===========\n" );

  print_number_array( array, array_len );

  int i = 0;
  int j = array_len -1;

  while (j >= 0)
  {
    for (i = 1; i <= j; i++)
    {
      int left = array[i -1];
      int right = array[i];
      
      if (right < left)
      {
        array[i -1] = right;
        array[i] = left;
      }
    }

    j = j -1;

    print_number_array( array, array_len );
  }

  print_number_array( array, array_len );
}
