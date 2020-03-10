import java.util.Scanner;
class test
{
  private int hours;
  private int minutes;
  private int seconds;
  test()
  {

  }
  test(int h,int m,int s)
  {
    hours=h;
    minutes=m;
    seconds=s;
  }
  public void show()
  {
    System.out.println("hours = "+hours+" minutes = "+minutes+" seconds = "+seconds);
  }
  public void get()
  {
    Scanner sc = new Scanner(System.in);
    System.out.println("Enter the hours:");
    hours=sc.nextInt();
    System.out.println("Enter the minutes:");
    minutes=sc.nextInt();
    System.out.println("Enter the seconds:");
    seconds=sc.nextInt();
  }
  public void add(test obj1,test obj2)
  {
    hours = obj1.hours + obj2.hours;
    minutes = obj1.minutes + obj2.minutes;
    seconds = obj1.seconds + obj2.seconds;
    if(seconds>60)
    {
      minutes += seconds/60;
      seconds = seconds%60;
    }
    if(minutes>60)
    {
      hours += minutes/60;
      minutes = minutes%60;
    }
  }
  public static void main(String arg[])
  {
    test obj1=new test();
    test obj2=new test();
    test obj3=new test();
    System.out.println("enter the first set of time\n");
    obj1.get();
    System.out.println("enter the second set of time\n");
    obj2.get();
    obj3.add(obj1,obj2);
    System.out.println("hours = "+obj3.hours+" minutes = "+obj3.minutes+" seconds = "+obj3.minutes);
  }
}
