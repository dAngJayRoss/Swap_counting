#include <stdio.h>
#include "bubble_sort.h"

int main(void) 
{
  int arr[9] = {97,  16,  45,  63,  13,  22,  7,  58,  72};

  numberOfSwaps(arr, 9);

  bubbleSort(arr, 9);
  
  return 0;
}