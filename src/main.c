#include "lightsaber.h"
#include "sorting/insertion.h"
#include "sorting/merge.h"

int main() {
  int i = 0;

  //int numbers[] = { 4, 7, 9, 2, 5, 1, 8, 6, 3 };
  //int numbers[] = { 4, 7, 9, 2, 5, 1, 8, 6 };
  int numbers[] = { 5, 1, 8, 6, 4, 7, 9, 2, 3 };

  //insertion_sort(numbers, 9);
  merge_sort(numbers, 9, 0, 8);

  return(0);
}
