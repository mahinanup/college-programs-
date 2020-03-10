public class s
{
  private int reg,contact;
  private String name,city;
  public void get(int r,int c,String n,String ci)
  {
    reg=r;
    contact=c;
    name=n;
    city=ci;
  }
  public void shows()
  {
    System.out.println(reg+"\n"+contact+"\n"+name+"\n"+city);
  }
}
class aca extends s
{
  private int marks,att;
  public void geta(int r,int c,String n,String ci,int m,int a)
  {
    get(r,c,n,ci);
    marks=m;
    att=a;
  }
  public void show()
  {
    shows();
    System.out.println(marks+"\n"+att+"%");
  }
}
class demo
{
  public static void main(String arg[])
  {
    aca a1 = new aca();
    a1.geta(123,4556,"mahin","jaipur",200,80);
    a1.show();
  }
}
