#include "merge.h"
#include <math.h>

/* PRIVATE */

void _merge(int * array, int left, int middle, int right)
{
  int n1 = middle - left + 1; 
  int n2 = right - middle;
  int left_array[n1];
  int right_array[n2];

  int i;
  for (i = 0; i < n1; i++)
  {
    left_array[i] = array[left + i];
  }

  for (i = 0; i < n2; i++)
  {
    right_array[i] = array[(middle + 1) + i];
  }

  printf("left:%d, middle:%d, right:%d\n", left, middle, right);

  int l = 0;
  int r = 0;

  int left_sentinal_reached = 0;
  int right_sentinal_reached = 0;

  for ( i = left; i <=right; i++ )
  {
    if ( !left_sentinal_reached && left_array[l] < right_array[r] )
    {
      array[i] = left_array[l];
      l = l +1;
      if ( l == n1 )
      { 
        left_sentinal_reached = 1;
      }
      continue;
    }
    
    if ( !right_sentinal_reached && right_array[r] < left_array[l] )
    {
        array[i] = right_array[r];
        r = r +1;
        if ( r == n2 )
        {
          right_sentinal_reached = 1;
        }
        continue;
    }

    if ( left_sentinal_reached )
    {
      array[i] = right_array[r];
      r = r +1;
      continue;
    }

    if ( right_sentinal_reached )
    {
      array[i] = left_array[l];
      l = l +1;
    }
  }

}

int * _merge_sort(int * array, int left, int right)
{
  if (left < right) {
    int middle = floor((left + right)/2);
    
    _merge_sort(array, left, middle);
    _merge_sort(array, middle +1, right);

    _merge(array, left, middle, right);
  }
}

/* PUBLIC */

int * merge_sort(int * array, int array_len, int left, int right)
{
  printf("merge sort\n");
  print_number_array(array, array_len);
  printf("==========\n\n");

  _merge_sort(array, left, right);

  printf("\n");
  print_number_array(array, array_len);
}
