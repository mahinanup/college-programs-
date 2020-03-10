import java.util.Scanner;
class remodup
{
  public static void main(String arg[])
  {
    int n,i,L=0,j;
    Scanner sc = new Scanner(System.in);
    System.out.println("Enter the size of array\n");
    n=sc.nextInt();
    int a[];
    a = new int[n];
    for(i=0;i<n;i++)
    {
      System.out.println("enter element\n");
      a[i]=sc.nextInt();
    }
    for(i=0;i<n;i++)
    {
      a[L++]=a[i];
      for(j=0;j<L-1;j++)
      {
        if(a[i]==a[j])
        {
          L--;
          break;
        }
      }
    }
    System.out.println("the new length of the array is "+L);
  }
}
