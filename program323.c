
#include <stdio.h>
#include <stdlib.h>

int main()
{
  int *ptr = NULL;
  int isize = 0;

  printf("enter number of elements you want:\n");
  scanf("%d", &isize);

  // step 1: allocate the memory
  ptr = (int *)malloc(sizeof(int) * isize);
  // step 2:use the memory

  // step 3: free thr memory

  free(ptr);

  return EXIT_SUCCESS;
}