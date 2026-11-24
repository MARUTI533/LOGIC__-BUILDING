
// additon code

#include <stdio.h>
#include <stdlib.h>

int summation(int arr[], int ilength)
{
  int icnt = 0;
  int isume = 0;

  for (icnt = 0; icnt < ilength; icnt++)
  {
    isume = isume + arr[icnt];
  }
  return isume;
}

int main()
{
  int *ptr = NULL;
  int isize = 0, icnt = 0;
  int iret = 0;

  printf("enter number of elements you want:\n");
  scanf("%d", &isize);

  // step 1: allocate the memory
  ptr = (int *)malloc(sizeof(int) * isize);

  // step 2:use the memory
  printf("enter thr elements:\n");
  for (icnt = 0; icnt < isize; icnt++)
  {
    scanf("%d", &ptr[icnt]);
  }

  iret = summation(ptr, isize);
  printf("addition of all elements: %d\n", iret);
  // step 3: free thr memory

  free(ptr);

  return EXIT_SUCCESS;
}