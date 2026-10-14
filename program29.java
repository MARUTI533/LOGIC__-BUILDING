import java.util.Scanner;

class program29 {

  public static void main(String A[]) {

    Scanner scanner = null;
    String sName = null;
    int iAge = 0;
    float fMarks = 0.0f;

    scanner = new Scanner(System.in);

    System.out.println("enter your name");
    sName = scanner.nextLine();
    System.out.println("enter your age:");
    iAge = scanner.nextInt();
    System.out.println("enter your mark");
    fMarks = scanner.nextFloat();

    System.out.println("welcome " + sName);
    System.out.println("your age is:" + iAge);
    System.out.println("your marks is:" + fMarks);

  }
}