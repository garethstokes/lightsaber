#include "insertion.h"

int * insertion_sort(int * array, int array_len)
{
  int i, j;

  printf("\ninsertion_sort\n");
  printf("==============\n");

  if (array_len <= 2) return array;

  for (i = 2; i < array_len; i++)
  {
    int key = array[i];
    j = i -1;


    while (j >= 0 && array[j] > key)
    {
      array[j+1] = array[j]; 
      j = j -1;
      print_number_array(array, array_len);
    }

    array[j +1] = key;
    print_number_array(array, array_len);
  }

  printf("\n");
}
