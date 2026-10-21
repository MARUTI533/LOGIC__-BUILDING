/*
    Q. find the factorial number.

*/

#include <stdio.h>
#include <stdlib.h>

typedef unsigned long long ULONG;

ULONG factorial(int ino)
{
  int icint = 0;
  ULONG ifact = 0;

  for (icint = 1, ifact = 1; icint <= ino; icint++)
  {
    ifact = ifact * icint;
  }
  return ifact;
}

int main()
{
  int ivalue = 0;
  ULONG iret = 0;

  printf("enter the number:\n");
  scanf("%d", &ivalue);

  iret = factorial(ivalue);
  printf("factorial is :\n%lld", iret);

  return EXIT_SUCCESS;
}