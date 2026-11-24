
#include <stdio.h>
#include <stdlib.h>

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
  // step 3: free thr memory

  free(ptr);

  return EXIT_SUCCESS;
}