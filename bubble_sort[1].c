#include <stdio.h>
#include "bubble_sort.h"

void bubbleSort(int* arr, int n)
{
	int temp;
  int countswaps = 0;

  printf("Before swap: ");
  print_array(arr, n);
  printf("\n\n");
  
  for(int i = 0; i < n - 1; ++i)
    {
      for(int j = 0; j < n - i - 1; ++j)
        {
          if(arr[j] > arr[j + 1])
          {
            temp = arr[j + 1];
            arr[j + 1] = arr[j];
            arr[j] = temp;

            printf("Swap #%d:\t", ++countswaps);
            print_array(arr, n);
            printf("\n\n");
          }
        }

      printf("\n\n");
    }
}

void numberOfSwaps(int *arr, int sz)
{
  int nswaps = 0;
  int tswaps = 0;

  for(int i = 0; i < sz; ++i)
    {
      for(int j = i+1; j <= sz - 1; ++j)
        {
          if(arr[i] > arr[j])
          {
            ++nswaps;
          }
        }
      printf("At index %d which has a value of %d needs to be swap %d times.\n", i, arr[i], nswaps);
      tswaps += nswaps;
      nswaps = 0;
    }

  printf("\nThe bubble sort algorithm has to do %d total swaps.\n\n", tswaps);
}

void print_array(int *ar, int sz)
{
  for(int i = 0; i < sz; ++i)
    {
      if(i == 0)
      {
        printf("%d ", ar[i]);
      }
      else if(i != 0 && i % 10)
      {
        printf("%d ", ar[i]);
      }
      else
      {
        printf("%d\n", ar[i]);
      }
    }
}