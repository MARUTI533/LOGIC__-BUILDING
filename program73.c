#include <stdio.h>
#include <stdlib.h>

void display(int ino)
{
  int iCint = 0;

  for (iCint = 1; iCint <= ino; iCint++)
  {

    printf("%d\t*\t", iCint);
  }
  printf("\n");
}

int main()
{
  int ivalue = 0;
  printf("enter the frequency:\n");
  scanf("%d", &ivalue);

  display(ivalue);

  return EXIT_SUCCESS;
}