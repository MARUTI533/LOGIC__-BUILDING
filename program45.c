/*
   Q. find the average of two numbers.
*/

#include <stdio.h>
#include <stdlib.h>

float average(int iNo1, int iNo2)
{
  float fAns = 0.0f;
  fAns = iNo1 + iNo2;

  // typecasting
  fAns = ((float)iNo1 + (float)iNo2) / 2;
  return fAns;
}

int main()
{
  int ivalue1 = 0, ivalue2 = 0;
  float fresult = 0.0f;

  printf("enter the first number:\n");
  scanf("%d", &ivalue1);

  printf("enter second numbr:\n");
  scanf("%d", &ivalue2);

  fresult = average(ivalue1, ivalue2);

  printf("average is :%f\n", fresult);

  return EXIT_SUCCESS;
}