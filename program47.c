/*
  Q. find the maximum number between three numbers.
*/
#include <stdio.h>
#include <stdlib.h>
int maximum(int iNo1, int iNo2, int iNo3)
{

  if ((iNo1 > iNo2) && (iNo1 > iNo3))
  {
    return iNo1;
  }
  else if ((iNo2 > iNo1) && (iNo2 > iNo3))
  {
    return iNo2;
  }
  else
  {
    return iNo3;
  }
}

int main()
{
  int ivalue1 = 0, ivalue2 = 0, ivalue3 = 0, iresult = 0;

  printf("enter the first number:\n");
  scanf("%d", &ivalue1);

  printf("enter second numbr:\n");
  scanf("%d", &ivalue2);

  printf("enter third numbr:\n");
  scanf("%d", &ivalue3);

  iresult = maximum(ivalue1, ivalue2, ivalue3);
  printf("maximum is :%d\n", iresult);

  return EXIT_SUCCESS;
}