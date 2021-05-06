package constructorsInJava;

class Sum
{
     float num1 , num2;  
     
     //special method that have the same name as per the name of the class
    //it is use to create object of a class to initialize instance variables
     
     Sum(int num1 ,int num2)  
     {
    	 this((float)num1 , (float)num2);
     }
     
     Sum(float num1 , float num2)
     {
    	 this.num1 = num1; 
    	 this.num2 = num2;
     }
     float getAdd()
     {
    	 return(num1+num2);
     }
}



public class callConstInAnotherConst {

	public static void main(String[] args) {
		Sum s1=new Sum(23,34);
		System.out.println("Sum of two numbers is : "+s1.getAdd());
		
		Sum s2=new Sum(23.45f , 34.44f);
		System.out.println("Sum of two numbers is : "+s2.getAdd());

	}

}
