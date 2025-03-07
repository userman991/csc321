//Jovanny Gonzalez
//CSC321-40
//3-6-2025

import java.util.Scanner;

public class jgonzalezM1{
	public static void main(String[]args){
		Scanner keyboard=new Scanner(System.in);
		int guess;
		int myNum=9;
		System.out.println("I want you to guess a number.\n");
		System.out.println("If it matches my number, you win a car!");
		System.out.print("Guess a number: ");
		guess=keyboard.nextInt();
		System.out.println("");

		System.out.println("My number is "+myNum);
		System.out.println("Your guess is "+guess);

		if (guess==myNum){
			System.out.println("Your number matchers, you won a car!!!");
		}
		if(guess!=myNum){
			System.out.println("Your number does not match. You lost. You owe me a car.");
		}
	}
}

