import java.io.File;
import java.io.IOException;
import java.io.FileWriter;
import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.FileReader;
public class file
{
  public static void main(String arg[])
  {
    File f1 = new File("C:/Users/mahin anup/Desktop/189303032/newfile.txt");
    try{
    if(f1.createNewFile())
    {
      System.out.println("File created: "+f1.getName());
    }
    else
    {
      System.out.println("File already exists\n");
    }
    }
  catch(IOException e)
  {
    System.out.println(e);
  }
  if(f1.exists())
  {
    System.out.println("File name: "+f1.getName());
    System.out.println("PAth: "+ f1.getAbsolutePath());
    System.out.println("writable :"+f1.canWrite());
    System.out.println("readable: "+f1.canRead());
    System.out.println("size of file in bytes : "+f1.length());
  }
  else
  {
    System.out.println("File does not exist\n");
  }
  try
  {
    String content = "this is java file handleing\n lol this is boring and useless\n30\n";
    FileWriter f2= new FileWriter("C:/Users/mahin anup/Desktop/189303032/newfile.txt");
    BufferedWriter b2 = new BufferedWriter(f2);
    f2.write(content);
    f2.write("20\n30\n");
    f2.close();
  }
catch(IOException e)
{
  System.out.println(e);
}

try{
FileReader f3 = new FileReader("C:/Users/mahin anup/Desktop/189303032/newfile.txt");
String line;
BufferedReader b1 = new BufferedReader(f3);
while((line = b1.readLine())!= null)
{
  System.out.println(line);
}
b1.close();
}
catch(IOException e)
{
    System.out.println(e);
}


  }
}
