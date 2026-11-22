#include <stdio.h>
#include <stdlib.h>

void display(int *ptr)
{
  printf("%d\n", *ptr);

  ptr++;
  printf("%d\n", *ptr);

  ptr++;
  printf("%d\n", *ptr);

  ptr++;
  printf("%d\n", *ptr);

  ptr++;
  printf("%d\n", *ptr);
}
int main()
{
  int arr[5] = {11, 21, 51, 101, 111};

  display(arr); // displya(100)

  return EXIT_SUCCESS;
}