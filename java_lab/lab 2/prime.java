import java.util.Scanner;
class prime
{
    private int N; //data member

    public prime(int N) //parameterised constructor
    {
        this.N=N;
    }
    private boolean isPrime(int N) //checks if N is a prime number
    {
        int c=0;

        for(int i=1;i<=N;i++)
        {
            if(N%i==0)
                c++;
        }
        return (c==2);
    }
    public void printPrimes()
    {
        System.out.println("Primes till "+N+":");
        for(int i=1;i<=N;i++)
        {
            if(isPrime(i))
                System.out.println(i);
        }
    }
}
class demo
{
    public static void main(String[] args)
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter a number");
        int N=sc.nextInt();

        prime obj=new prime(N);
        obj.printPrimes();
    }
}
