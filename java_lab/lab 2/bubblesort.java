//sort an array using bubblesort
import java.util.Scanner;
class bubblesort
{
  private int N;
  private int a[];
  public bubblesort()
  {
    Scanner sc = new Scanner(System.in);
    System.out.println("Enter the size of array\n");
    N=sc.nextInt();
    a=new int[N];
    for(int i=0;i<N;i++)
    {
      System.out.println("enter the element "+i);
      a[i]=sc.nextInt();
    }
  }
  public void sort()
  {
    int tmp;
    for(int i=0;i<N;i++)
    {
      for(int j=0;j<N-i-1;j++)
      {
        if(a[j]>a[j+1])
        {
          tmp=a[j];
          a[j]=a[j+1];
          a[j+1]=tmp;
        }
      }
    }
  }
  public void display()
  {
    for(int i=0;i<N;i++)
    {
      System.out.println(a[i]+" ");
    }
  }
}
class demo
{
public static void main(String arg[])
{
  bubblesort obj = new bubblesort();
  System.out.println("array before sorting is\n");
  obj.display();
  obj.sort();
  System.out.println("array after sorting is\n");
  obj.display();
}
}
