class student
{
	public int roll,marks;
	private String name,city;
	public student()
	{
		System.out.println("I am default");
		roll=0;
		marks=0;
		name=null;
		city=null;
	}
	public student(int r,int m,String n,String c)
	{System.out.println("I am paramerize");
		roll=r;
		marks=m;
		name=n;
		city=c;
	}
	public student(student s)
	{System.out.println("I am copy constructor");
		roll=s.roll;
		marks=s.marks;
		name=s.name;
		city=s.city;
	}

	public void show()
	{
		System.out.println("\nroll="+roll+"\nmarks="+marks+"\nname="+name+"\ncity="+city);
	}
}
class demo5
{
	public static void main(String arg[])
	{
		student s1=new student(10,34,"ajay","jaipur");
		student s2=new student(11,37,"Raj","Bhopal");
	s1.show();
	student s3=new student(s1);
	student s4=s1;
	s1.roll=99;
	
	s3.show();
	s4.show();
	}

}
