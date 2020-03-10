import java.util.Scanner;
class patt1
{
    private int n;

    public patt1() //constructor
    {
      Scanner sc = new Scanner(System.in);
      System.out.println("enter the no. of rows\n");
      n=sc.nextInt();
    }
    public void printPattern() //prints the pattern
    {
        for(int i=n;i>=1;--i) //rows
        {
            for(int j=1;j<=i;++j) //columns
                System.out.print("*");
            System.out.println();
        }
    }
}
class demo
{
    public static void main(String arg[])
    {
        patt1 obj=new patt1();
        obj.printPattern();
    }
}
