class countobj
{
    private static int counter=0;

    public countobj()
    {
        ++counter;
        System.out.println("Object number "+counter+" created.");
    }
    public static int get()
    {
        return counter;
    }
}
class demo
{
    public static void main(String[] args)
    {
        countobj obj1 = new countobj();
        countobj obj2 = new countobj();
        countobj obj3 = new countobj();
        countobj obj4 = new countobj();
        System.out.println("\nNumber of objects created: "+countobj.get());
    }
}
