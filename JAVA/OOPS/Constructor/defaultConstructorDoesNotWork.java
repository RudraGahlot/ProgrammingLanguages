package constructorsInJava;

class substract{
	int num1 , num2;
	substract(int num1 , int num2)
	{
		this.num1 =num1;
		this.num2=num2;
	}
	
	void getSubstraction()
	{
		int sub = num1 -num2;
		System.out.println("substraction is = "+sub);
	}
}


public class mainSubstract {

	public static void main(String[] args) 
	{
		substract s1 = new substract(44,22);
		s1.getSubstraction();

	}

}
