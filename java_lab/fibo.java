class fibo
{
  public static void main(String arg[])
  {
    int a=0,b=1,n,i,c,sum=0;
    double avg;
    n = Integer.parseInt(arg[0]);
    for(i=1;i<=n;i++)
    {
      c=a+b;
      a=b;
      b=c;
      System.out.println(a+" ");
      sum+=a;
    }
    avg = sum/n;
    System.out.println("the average of all the elements is "+avg);
  }
}
