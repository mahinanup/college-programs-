import java.util.Scanner;
class employee
{
  private String name,dname,des;
  private int id,salary;
  private static int c=0;
  public employee()
  {
  }
  public employee(String n,String dn,String d,int s)
  {
    name=n;
    dname=dn;
    des=d;
    salary=s;
    id=++c;
  }
  public static void search(employee e[],int ID,int n)
  {

    for(int i=0;i<n;i++)
    {
      if(ID==e[i].id)
      {
        e[i].show();
        return;
      }
    }
      System.out.println("wrong ID\n");
  }
  public static void check(employee e[])
  {
    int x,y;
    Scanner sc = new Scanner(System.in);
    System.out.println("enter the id of first employee\n");
    x=sc.nextInt();
    System.out.println("enter the id of second employee\n");
    y=sc.nextInt();
    if(e[x].salary<=e[y].salary)
    {
      e[x].salary += 1000;
    }
    e[x].show();
  }
  public void show()
  {
    System.out.println("name = "+name+" ID = "+id+" department = "+dname+" designation = "+des+" salary = "+salary);
  }
}
class demo
{
  public static void main(String arg[])
  {
    System.out.println("enter the total number of employee\n");
    Scanner sc = new Scanner(System.in);
    int x = sc.nextInt();
    employee e[] = new employee[x];
    for(int i=0;i<x;i++)
    {
      System.out.println("enter the name\n");
      String name=sc.next();
      System.out.println("enter department\n");
      String dname=sc.next();
      System.out.println("enter designation\n");
      String des=sc.next();
      System.out.println("enter salary\n");
      int salary=sc.nextInt();
      e[i] = new employee(name,dname,des,salary);
    }
    System.out.println(" ");
    System.out.println("enter employee id for searching\n");
    int y = sc.nextInt();
    employee.search(e,y,x);
    employee.check(e);
    }
}
