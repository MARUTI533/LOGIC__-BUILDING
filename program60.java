import java.util.Scanner;

class program60 {

  public static void main(String A[]) {

    Scanner scanner = new Scanner(System.in);
    int iValue = 0;

    Iteration iteration = new Iteration();
    System.out.println("enter the frequency");
    iValue = scanner.nextInt();
    iteration.display(iValue);

  }
}

class Iteration {
  public void display(int iNo) {
    int iCint = 1;

    for (iCint = 1; iCint <= iNo; iCint++) {
      System.out.println("______________");
      System.out.println("jay ganesh...");
      System.out.println("______________");

    }

  }
}