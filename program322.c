
#include <stdio.h>
#include <stdlib.h>

int main()
{
  int *ptr = NULL;
  int isize = 0;

  printf("enter number of elements you want:\n");
  scanf("%d", &isize);

  ptr = (int *)malloc(sizeof(int) * isize);

  return EXIT_SUCCESS;
}