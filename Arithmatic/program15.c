#include "header.h"

int main()
{
  int ivalue1=0,ivalue2=0,iresult=0;

  printf("enter first number:\n");
  if(scanf("%d",&ivalue1)!=1)
  {
    fprintf(stderr,"unable to procced as input isi nvalid");
    return EXIT_FAILURE;
  }

  printf("enter second number:\n");
  if(scanf("%d",&ivalue2)!=1)
  {
    fprintf(stderr,"unable to proced as input is invalid");
    return EXIT_FAILURE;
  }

  iresult=addition(ivalue1,ivalue2); 
  printf("addition is:%d\n",iresult);

  return EXIT_SUCCESS;
}
