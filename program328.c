

#include <stdio.h>
#include <stdlib.h>

float average(int arr[], int ilength)
{
  int icnt = 0;
  int isume = 0;

  for (icnt = 0; icnt < ilength; icnt++)
  {
    isume = isume + arr[icnt];
  }
  return (isume / ilength);
}

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
  float fret = 0.0f;

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
  fret = average(ptr, isize);

  printf("addition of all elements: %d\n", iret);
  printf("average is:%f\n", fret);
  // step 3: free thr memory

  free(ptr);

  return EXIT_SUCCESS;
}