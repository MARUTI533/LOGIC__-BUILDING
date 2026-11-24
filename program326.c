
#include <stdio.h>
#include <stdlib.h>

void display(int arr[], int ilength)
{
  int icnt = 0;

  printf("elements of the array are:\n");

  for (icnt = 0; icnt < ilength; icnt++)
  {
    printf("%d\n", arr[icnt]);
  }
}

int main()
{
  int *ptr = NULL;
  int isize = 0, icnt = 0;

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

  display(ptr, isize);
  // step 3: free thr memory

  free(ptr);

  return EXIT_SUCCESS;
}