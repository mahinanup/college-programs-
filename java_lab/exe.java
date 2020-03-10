class lowage extends Exception
{
  lowage()
  {
    super("you are underage");
  }
}
class vote
{
  public void check(int age) throws lowage
  {
    if(age<18)
    {
      throw new lowage();
    }
    else
    {
      System.out.println("you are eligible");
    }
  }
}
class demo
{
  public static void main(String arg[])
  {
    vote v1 = new vote();
    try{
    v1.check(3);
  }
  catch(Exception e)
  {
    System.out.println(e);
  }
  finally
  {
    System.out.println("END");
  }
  }
}
