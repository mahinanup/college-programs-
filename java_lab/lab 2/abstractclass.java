//class - shape
//with different shapes such as square,rectangle,circle etc.
//abstract class should contain abstract methods with areas of different shapes
import java.util.Scanner;
abstract class shapes
{
  abstract public void area();
  public void display()
  {
    System.out.println("lol\n");
  }
}
class square extends shapes
{
  private int side;
  public square(int s)
  {
    side = s;
  }
  public void area()
  {
    int area = side*side;
    System.out.println("Area of square = "+area);
  }
}
class rectangle extends shapes
{
  private int length,width;
  public rectangle(int l,int w)
  {
    length=l;
    width=w;
  }
  public void area()
  {
    int area = length*width;
    System.out.println("Area of rectangle = "+area);
  }
}
class circle extends shapes
{
  private int radius;
  public circle(int r)
  {
    radius = r;
  }
  public void area()
  {
    double area  = 3.14*radius*radius;
    System.out.println("Area of circle is = "+area);
  }
}
class demo
{
  public static void main(String arg[])
  {
    shapes s1 = new rectangle(2,4);
    s1.area();
    shapes s2 = new square(4);//when new sqaure is called ,new rectangle heap object is de referancesd and garbage is made.
    s2.area();
    shapes s3 =new circle(6);
    s3.area();
    s3.display();
  }
}
// abstract class is advantageous to stack as only one referance is created and n no.of objects are created in heap
// but it is disadvantageous for heap as the new keyword is called the previous object is left there until system.gc is called
//abstract class is used so that n no. of functions can be made with same name
