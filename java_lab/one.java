public class one
{
  int num;
  boolean valueset = false;

  public synchronized void put(int num)
  {
    while(valueset)
    {
      try{
        wait();
      }
      catch(Exception e)
      {}
    }
    System.out.println("put : "+num);
    this.num=num;
    valueset=true;
    notify();
  }
  public synchronized void get()
  {
    while(!valueset)
    {
      try{
        wait();
      }catch(Exception e)
      {}
    }
    System.out.println("get : "+num);
    valueset=false;
    notify();
  }

}
class producer implements Runnable
{
  one a;
  public producer(one a)
  {
    this.a = a;
    Thread t = new Thread(this,"producer");
    t.start();
  }
  public void run()
  {
    int i =0;
    while(i<10)
    {
      a.put(i++);
      try{Thread.sleep(100);}catch (Exception e){ }
    }
  }

}
class consumer implements Runnable
{
  one a;
  public consumer(one a)
  {
    this.a=a;
    Thread t = new Thread(this,"consumer");
    t.start();
  }
  public void run()
  {
    while(true)
    {
      a.get();
      try{Thread.sleep(100);}catch (Exception e){ }
    }
}
}
class demo
{
  public static void main(String arg[])
  {
    one a = new one();
    new producer(a);
    new consumer(a);
  }
}
