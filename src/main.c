#include "lightsaber.h"
#include "sorting/insertion.h"


int main() {
  int i = 0;

  int numbers[] = { 4, 7, 9, 2, 5, 1, 8, 6, 3 };

  insertion_sort(numbers, 9);

  return(0);
}
