import java.util.Scanner;
class demo1
{
  public static void main(String arg[])
  {
    int arr[] = new int[5];
    Scanner sc = new Scanner(System.in);
    int i;
    System.out.println("enter the elements of array\n");
    for(i=0;i<arr.length;i++)
    {
      arr[i]=i+1;
      /*arr[i]=sc.nextInt();*/
    }
    for(i=0;i<arr.length;i++)
    {
      System.out.println("|"+arr[i]+"|");
    }
  }
}
