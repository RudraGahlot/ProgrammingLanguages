package methodsInJava;
import java.util.Scanner;

public class instanceMethodExample {

	public static void main(String[] args) {
	    
		instanceMethodExample obj = new instanceMethodExample();  //creating an object of the class
		Scanner sc = new Scanner(System.in);
		
		System.out.print("Enter the values of A and B : ");
		int A = sc.nextInt();
		int B = sc.nextInt();
		
		System.out.println("The Sum is :" +obj.add(A,B));  // invoking instance method
		
	}
    int s;
    public int add(int a , int b)
{
    s=a+b;
    return s;
}
}
