//if withdrawal amount is more than 50k then 1% dedicted by sbi,2%- bank of india , 3%- axis
import java.util.Scanner;
class balanceerror extends Exception
{
  public balanceerror()
  {
    super(" There is insufficeint Balance in your account");
  }
}
class depoerror extends Exception
{
  public depoerror()
  {
  super(" You are Exceeding the limit of deposit");
  }
}
abstract class bank
{
  int accno;
  double bal;
  abstract public double withdraw(int accno,double bal) throws balanceerror;
  abstract public void deposit(int accno,double bal) throws depoerror;
  abstract public void simpleinterest(double bal);
  abstract public void show();
}
class sbi extends bank
{
    public sbi(int accno,double bal)
    {
      this.accno=accno;
      this.bal=bal;
    }
    static int roi=3;
    public double withdraw(int accno,double bal) throws balanceerror
    {
      int x;
      double y;
      Scanner sc = new Scanner(System.in);
      System.out.println("enter the amount to withdraw\n");
      x=sc.nextInt();
      if(x>bal)
      {
        throw new balanceerror();

      }
      if(x>=50000)
      {
        y=0.01*x;
        bal= bal-x-y;
      }
      bal = bal-x;
      System.out.println("Current balance is "+bal);
      return bal;
    }
    public void deposit(int accno,double bal) throws depoerror
    {
      Scanner sc = new Scanner(System.in);
      int z;
      System.out.println("enter the amount to be deposited\n");
      z=sc.nextInt();
      if(z>70000)
      {
        throw new depoerror();
      }
      else{
      bal=bal+z;
      System.out.println("the current bal is "+bal);
      }
    }
    public void simpleinterest(double bal)
    {
      int t;
      Scanner sc = new Scanner(System.in);
      System.out.println("enter time for simple interest\n");
      t=sc.nextInt();
      double x;
      x=(bal*t*roi)/100;
      System.out.println("simple interest is "+x);
    }
    public void show ()
    {
      System.out.println("account number ="+accno);
      System.out.println("\n");
      System.out.println("bank = SBI");
      System.out.println("\n");

    }
}
class axis extends bank
{
    public axis(int accno,double bal)
    {
      this.accno=accno;
      this.bal=bal;
    }
    static int roi=4;
    public double withdraw(int accno,double bal)
    {
      int x;
      double y;
      Scanner sc = new Scanner(System.in);
      System.out.println("enter the amount to withdraw\n");
      x=sc.nextInt();
      if(x>bal)
      {
        System.out.println("cannot be withdrawed");
        return 0;
      }
      if(x>=50000)
      {
        y=0.01*x;
        bal= bal-x-y;
      }
      System.out.println("Current balance is "+bal);
      return bal;
    }
    public void deposit(int accno,double bal)
    {
      Scanner sc = new Scanner(System.in);
      int z;
      System.out.println("enter the amount to be deposited\n");
      z=sc.nextInt();
      bal=bal+z;
      System.out.println("the current bal is "+bal);
    }
    public void simpleinterest(double bal)
    {
      int t;
      Scanner sc = new Scanner(System.in);
      System.out.println("enter time for simple interest\n");
      t=sc.nextInt();
      double x;
      x=(bal*t*roi)/100;
      System.out.println("simple interest is "+x);
    }
    public void show ()
    {
      System.out.println("account number ="+accno);
      System.out.println("\n");
      System.out.println("bank = AXIS");
      System.out.println("\n");

    }
}
class bankofindia extends bank
{
    public bankofindia(int accno,double bal)
    {
      this.accno=accno;
      this.bal=bal;
    }
    static int roi=6;
    public double withdraw(int accno,double bal)
    {
      int x;
      double y;
      Scanner sc = new Scanner(System.in);
      System.out.println("enter the amount to withdraw\n");
      x=sc.nextInt();
      if(x>bal)
      {
        System.out.println("cannot be withdrawed");
        return 0;
      }
      if(x>=50000)
      {
        y=0.01*x;
        bal= bal-x-y;
      }
      System.out.println("Current balance is "+bal);
      return bal;
    }
    public void deposit(int accno,double bal)
    {
      Scanner sc = new Scanner(System.in);
      int z;
      System.out.println("enter the amount to be deposited\n");
      z=sc.nextInt();
      bal=bal+z;
      System.out.println("the current bal is "+bal);
    }
    public void simpleinterest(double bal)
    {
      int t;
      Scanner sc = new Scanner(System.in);
      System.out.println("enter time for simple interest\n");
      t=sc.nextInt();
      double x;
      x=(bal*t*roi)/100;
      System.out.println("simple interest is "+x);
    }
    public void show ()
    {
      System.out.println("account number ="+accno);
      System.out.println("\n");
      System.out.println("bank = bankofindia");
      System.out.println("\n");

    }
}
class demo
{
  public static void main(String arg[])
  {
    double x=0,y,z;
    Scanner sc = new Scanner(System.in);
    bank b1 = new sbi(123,100000);
    try{
    x = b1.withdraw(123,100000);
    b1.deposit(123,x);
    }
    catch(balanceerror e)
    {
      System.out.println(e);
    }
    catch(depoerror e)
    {
      System.out.println(e);
    }
    b1.simpleinterest(x);
    b1.show();


    /*bank b2 = new axis(456,200000);
    y= b2.withdraw(456,200000);
    b2.deposit(456,y);
    b2.simpleinterest(y);
    b2.show();


    bank b3 = new bankofindia(789,300000);
    z=b3.withdraw(789,300000);
    b3.deposit(789,z);
    b3.simpleinterest(z);
    b3.show();*/

  }
}
