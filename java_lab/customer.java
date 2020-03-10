 /*in show function all the information regarding customer should be displayed and there must be a check on weather the customer is the right
 or wrong on the basis of id*/
import java.util.Scanner;
class customer
{
  private int cid;
  private String name;
  private String Bname;
  private int ifsc;
  private double cbal;
  private int x;

  private customer()
  {
    x = 12345;
    cbal = 10000;
  }

  public static void main(String arg[])
  {
    customer obj1 = new customer();
    System.out.println("enter the following\n");
    obj1.get();
    obj1.show();

  }
  private void get()
  {
    Scanner sc = new Scanner(System.in);
    System.out.println("enter the bank name\n");
    Bname = sc.nextLine();
    System.out.println("enter the customer name\n");
    name = sc.nextLine();
    System.out.println("enter the customer id\n");
    cid = sc.nextInt();
    System.out.println("enter the ifsc code\n");
    ifsc = sc.nextInt();

  }
  private void show()
  {
    if(cid != x)
    {
      System.out.println("wrong id\n");
    }
    else
    {
      System.out.println("NAME = "+ name);
      System.out.println("id = "+ cid);
      System.out.println("Bank name = "+ Bname);
      System.out.println("ifsc code = "+ ifsc);
      System.out.println("balance = "+ cbal);
    }
  }


}
