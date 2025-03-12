//Jovanny Gonzalez
//CSC 321-40

import java.util.Scanner;
import java.util.Random;
public class jgonzalez9{
	public static void main (String[]args){
	Random random= new Random();
	int y=1+random.nextInt(20);
	//int y=7;
	System.out.print("Guess a number between 1-20: ");
	Scanner keyboard=new Scanner(System.in);
	int guess=keyboard.nextInt();

	while(guess<1||guess>20){
	System.out.println("Out of Range,re-enter guess: ");
	guess=keyboard.nextInt();

	}

	if (guess!=y){
	System.out.println("Guess does not equal my random number,Y: "+y);

		if (guess>y)
		{
			System.out.println("Guess is greater than Y, you lose.");
		}
		if (guess<y)
		{
			System.out.println("Guess is less than Y, you lose.");
		}
	}

	if (guess==y)
	{
		for(int i=0;i!=y;i++){
		System.out.println("You win. Guess is equal to Y");
		}
	}

	}
}

