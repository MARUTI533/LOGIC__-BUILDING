
#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////////////////////////
//
// function name: addition
// input        :intoger,intiger
// output       :intiger
// description  :performs addition
// date         :04/10/2026
// author       :mk
//
/////////////////////////////////////////////////////////////////////////

int addition(
                int ino1, //first input
                int ino2  //second input
            )
{
  int ians=0;
  ians=ino1+ino2;  // business logic
  return ians;

}
/////////////////////////////////////////////////////////////////////////
//
//  entry point of the application
//
/////////////////////////////////////////////////////////////////////////

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
////////////////////////////////////////////////////////////////////////
//   step5:test the program
//
//      tested test cases
//        input1  input2   output
//        10      11
//        11      0
//        0       11 
 //       20      -9  
 //       -9      20  
 //      -20     -11
////////////////////////////////////////////////////////////////////////
