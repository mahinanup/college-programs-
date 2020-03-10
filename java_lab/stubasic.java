import mypack2.info;
class stubasic implements info
{
  String name;
  int roll;
  String city;
  String branch;
  int contact;
  public void get(String n,int r,String c,String b,int ct)
  {
    name = n;
    roll = r;
    city = c;
    branch = b;
    contact = ct;
  }
  public void show()
  {
    System.out.println(Universityname);
  }
}
class academic extends stubasic implements info
 {
  double percentage;
  academic(String n,int r,String c,String b,int ct,double p)
  {
    get(n,r,c,b,ct);
    percentage=p;
  }
  public void show()
  {
    System.out.println(Universityname);
    System.out.println(name+roll+city+branch+contact+"The percentage = "+percentage);
  }
}
class demo
{
  public static void main(String arg[])
  {

    academic a1 = new academic("mahin",2,"delhi","cce",100,90);
    a1.show();
  }
}
