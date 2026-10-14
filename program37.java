
// Q: Write a java program which accept two numbers from user and return addition of that two numbers.

import java.util.Scanner;

class arithmatic {
  public static int addition(int iNo1, int iNo2) {
    int iAns = 0;
    iAns = iNo1 + iNo2;
    return iAns;
  }

  class program37 {
  }

  public static void main(String A[]) {

    Scanner scanner = null;
    int iValue1 = 0, iValue2 = 0, iResult = 0;

    scanner = new Scanner(System.in);
    System.out.println("enter first nomber:");
    iValue1 = scanner.nextInt();
    System.out.println("enter second number nomber:");
    iValue2 = scanner.nextInt();

    iResult = arithmatic.addition(iValue1, iValue2);
    System.out.println("addition is :" + iResult);

  }
}