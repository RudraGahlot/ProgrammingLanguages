package constructorsInJava;

class sum
{
     int num1 , num2;  
     
     //special method that have the same name as per the name of the class
    //it is use to create object of a class to initialize instance variables
     
     sum(int num1 , int num2)  
     {
    	 this.num1 = num1; 
    	 this.num2 = num2;
     }
     int getAdd()
     {
    	 return(num1+num2);
     }
}


public class constExample {

	public static void main(String[] args) {
	
		sum s1=new sum(23,34);
		System.out.println("Sum of two numbers is : "+s1.getAdd());

	}
}
