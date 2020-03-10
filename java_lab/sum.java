class sum
{
  public static void main(String arg[])
  {
    int num,sum=0;
    num = Integer.parseInt(arg[0]);
    System.out.println("the number is "+num);
    while(num!=0)
    {
      sum = sum + num%10;
      num = num/10;
    }
    System.out.println("the sum of digits is "+sum);

  }
}
