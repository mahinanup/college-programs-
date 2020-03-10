import java.util.Scanner;
public class time {
    private int hours, minutes, seconds;
    public static void main(String args[]){
        time obj1=new time();
        time obj2=new time();
        time obj3=new time();
        System.out.println("Enter the first set of time.");
        obj1.gettime();
        System.out.println("Enter the second set of time.");
        obj2.gettime();
        obj3.add(obj1, obj2);
        System.out.println("The addition gives :"+obj3.hours+" hours, "+obj3.minutes+" minutes and "+obj3.seconds+" seconds.");
    }
    private void add(time obj1, time obj2){
        hours=obj1.hours+obj2.hours;
        minutes=obj1.minutes+obj2.minutes;
        seconds=obj1.seconds+obj2.seconds;
        if(seconds>=60){
            minutes+=seconds/60;
            seconds=seconds%60;
        }
        if(minutes>60){
            hours+=minutes/60;
            minutes=minutes%60;
        }
    }
    private void gettime(){
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the hours:");
        hours=sc.nextInt();
        System.out.println("Enter the minutes:");
        minutes=sc.nextInt();
        System.out.println("Enter the seconds:");
        seconds=sc.nextInt();
    }
}
