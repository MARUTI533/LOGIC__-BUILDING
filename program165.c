

#include <stdio.h>
#include <stdlib.h>

void displaydigit(int ino)
{
  int idigit = 0;

  if (ino < 0)
  {

    ino = -ino;
  }

  while (ino != 0)
  {
    idigit = ino % 10;
    if ((idigit % 2) == 0)
    {
      printf("even:%d\n", idigit);
    }
    else
    {
      printf("odd:%d\n", idigit);
    }
    ino = ino / 10;
  }
}

int main()
{

  int ivalue = 0;

  printf("enter the number:\n");
  scanf("%d", &ivalue);

  displaydigit(ivalue);

  return EXIT_SUCCESS;
}