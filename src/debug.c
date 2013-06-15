#include "debug.h"

void print_number_array(int * array, int array_len) 
{
  int i = 0;
  printf("numbers: ");

  for (i = 0; i < array_len; i++)
  {
    printf("%d", array[i]);
  }

  printf("\n");
}
