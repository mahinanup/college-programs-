import java.util.scanner;// packages - collection of classes,where scanner is class of package util
class student
{
  private int rollno;//instance variable
  private String name;
  private static String college = "manipal";// static variable
  public static void changename()
  {
    System.out.println("enter the name of new college ");
    Scanner s1 =  new Scanner(System.in);
    // system.in - all the coding of keyboard is present in system class and 'in' is the object of system class for keyboard
    college = s1.nextLine();//nextLine is the method in system class

  }
  


}
