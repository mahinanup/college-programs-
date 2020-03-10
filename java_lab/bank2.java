import java.util.Scanner;
class LowBalance extends Exception
{
  public LowBalance()
  {
    super(" You have insufficeint balance");
  }
}
class bank
{
  private int pin;
  private String name;
  private int balance;
  public bank()
  {
  }
  public bank(int p,String n,int b)
  {
    pin = p;
    name = n;
    balance=b;
  }
  public void withdraw() throws LowBalance
  {
    int x;
    Scanner sc = new Scanner(System.in);
    System.out.println("################\n");
    System.out.println("Enter the amount to be withdrawed\n");
    x=sc.nextInt();
    if(x>balance)
    {
      throw new LowBalance();
    }
    else
    {
    balance = balance - x;
    System.out.println("###############\n");
    System.out.println("The new balance is "+balance);
  }
}
  public static void main(String arg[])
  {
  System.out.println(" WELCOME TO SBI\n ");
  System.out.println("#################\n");
  System.out.println(" ");
  bank b1 = new bank(123,"rohan",50000);
  try{
  b1.withdraw();
  }
  catch(LowBalance e)
  {
    System.out.println(e);
  }
  }
}
