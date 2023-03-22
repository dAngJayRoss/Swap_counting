#include <stdio.h>
#include "bubble_sort.h"

void bubbleSort(int* arr, int n)
{
	int temp;

  int countswap = 0;
  int swapno = 1;
  
  for(int i = 0; i < n - 1; ++i)
    {
      
      for(int j = 0; j < n - i - 1; ++j)
        {
          if(arr[j] > arr[j + 1])
          {
            temp = arr[j + 1];
            arr[j + 1] = arr[j];
            arr[j] = temp;

            ++countswap;
          }
        }
      if(countswap)
      {
        printf("Swap #%d: %d\n\n", swapno++, countswap);
        countswap = 0;
      }
      else if(countswap == 0)
      {
        printf("Swap #%d: %d\n\n", swapno++, countswap);
      }
    }
}
