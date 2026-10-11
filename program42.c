/*
  find the maximum number between two numbers using function.

*/

#include <stdio.h>
#include <stdlib.h>

int maximum(int iNo1, int iNo2)
{
  if (iNo1 > iNo2)
  {

    return iNo1;
  }
  else
  {
    return iNo2;
  }
}

int main()
{
  int ivalue1 = 0, ivalue2 = 0, iresult = 0;

  printf("enter the first number:\n");
  scanf("%d", &ivalue1);

  printf("enter second numbr:\n");
  scanf("%d", &ivalue2);

  iresult = maximum(ivalue1, ivalue2);
  printf("maximum number is :%d\n", iresult);

  return EXIT_SUCCESS;
}