#include <stdio.h>
#include <stdlib.h>

int main()
{
  int arr[4] = {0};
  int icnt = 0;

  printf("enter the elements of array:\n");
  scanf("%d", &arr[0]);
  scanf("%d", &arr[1]);
  scanf("%d", &arr[2]);
  scanf("%d", &arr[3]);

  printf("elemnts of the array are:\n");

  for (icnt = 0; icnt < 4; icnt++)
  {
    printf("%d\n", arr[icnt]);
  }

  return EXIT_SUCCESS;
}