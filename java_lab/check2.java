class check
{
	private int x;
	private static check instance = null;
	private check (int x)
	{
		this.x = x;
	}
	public void show()
	{
		System.out.println(x);
	}
	public static check getobj(int y)
	{
		if(instance == null)
		{
			instance = new check(y);
		}
		return instance;
	}
	public static check getobj1(int y)
	{
		instance = new check(y);
		return instance;
	}
}
class demo
{
	public static void main(String args[])
	{
		check c1 = check.getobj(1);
		System.out.println(c1);
		c1.show();
		check c2 = check.getobj(2);
		System.out.println(c2);
		c2.show(); //will show value of c1 object as they are pointing to same memory
		check c3 = check.getobj(3);
		System.out.println(c3);
		c3.show(); //will show value of c1 object as they are pointing to same memory
		check c4 = check.getobj1(4);
		System.out.println(c4);
		c4.show(); //will show the value passed as its now not pointing to new memory or its own memory
		check c5 = check.getobj1(5);
		System.out.println(c5);
		c5.show(); //will show the value passed as its now not pointing to new memory or its own memory
	
	}
}
