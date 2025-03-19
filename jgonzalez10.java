//Jovanny Gonzalez
////CSC321-40

import java.util.Scanner;
public class jgonzalez10{
	public static void main(String[] args)
	{
		Scanner keyboard= new Scanner(System.in);
		System.out.println("We are going to get the area/volume of a cylinder.");
		System.out.println("Enter the radius:");
		double radius=keyboard.nextDouble();
		System.out.println("Enter the height:");
		double height=keyboard.nextDouble();
		double areaVolume=areaVolume(radius, height);
		System.out.println("Area/Volume:"+areaVolume);
	}

	static double areaVolume(double radius, double height){
		double result=3.14*radius*radius*height;
		return result;
	}
}
