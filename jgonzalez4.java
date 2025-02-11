//jovanny gonzalez
//csc321
//lab 4


import java.util.Scanner;

public class jgonzalez4{
	public static void main(String[] args) {
		Scanner keyboard=new Scanner(System.in);
		System.out.println("Menu Selection for a saying: ");
		System.out.println("Option 1: Weather");
		System.out.println("Option 2: Food");
		System.out.println("Option 3: Travel");
		System.out.println("Option 4: Movie");

		int x;

		System.out.println("Choose an option from the Menu(1-4): ");
		
		x=keyboard.nextInt();

		if(x==1)
		{
			System.out.println("After rain comes fair weather.");
		}
		if(x==2)
		{
			System.out.println("An apple a day keeps the doctor away.");
		}
		if(x==3)
		{
			System.out.println("It's about the journey, not the destination.");
		}
		if(x==4)
		{
			System.out.println("With great power comes great responsibility");
		}
	}
}
