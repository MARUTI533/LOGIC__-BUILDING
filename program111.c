/*


*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool checkprime(int ino)
{

  int icnt = 0;

  for (icnt = 2; icnt <= ino / 2; icnt++)
  {

    if ((ino % icnt) == 0)
    {
      return false;
    }
  }
  return false;
}

int mian()
{
  int ivalue = 0;
  bool bret = false;

  printf("enter the number:\n");
  scanf("%d", &ivalue);

  bret = checkprime(ivalue);

  if (bret)
  {
    printf("it is a prime number\n");
  }
  else
  {
    printf("it is not a prime number\n");
  }

  return EXIT_SUCCESS;
}