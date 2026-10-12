/*
  Q. finding the average between three number.
*/
#include <stdio.h>
#include <stdlib.h>
float average(float iNo1, float iNo2, float iNo3)
{
  float fAns = 0.0f;

  fAns = iNo1 + iNo2 + iNo3;

  // typecasting
  fAns = ((float)iNo1 + (float)iNo2 + (float)iNo3) / 3;

  return fAns;
}

int main()
{
  int ivalue1 = 0, ivalue2 = 0, ivalue3 = 0;
  float fresult = 0.0f;

  printf("enter the first number:\n");
  scanf("%d", &ivalue1);

  printf("enter second numbr:\n");
  scanf("%d", &ivalue2);

  printf("enter third numbr:\n");
  scanf("%d", &ivalue3);

  fresult = average(ivalue1, ivalue2, ivalue3);
  printf("average is :%f\n", fresult);

  return EXIT_SUCCESS;
}