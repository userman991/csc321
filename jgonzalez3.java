//Jovanny Gonzalez
//CSC321
//Lab 3
//UPDATED


import java.util.Scanner;
public class jgonzalez3
{
        public static void main(String[] args)
        {
                int q;
                long w;
                float e;
                double r;
                int yourNumber;
                int x=10;
                int counter=0;

                Scanner keyboard=new Scanner(System.in);
                System.out.println("Enter an int value: ");
                q=keyboard.nextInt();
                System.out.println("Enter a long value: ");
                w=keyboard.nextLong();
                System.out.println("Enter a float value: ");
                e=keyboard.nextFloat();
                System.out.println("Enter a double value: ");
                r=keyboard.nextDouble();

                System.out.println("Enter an int value for a test: ");
                yourNumber=keyboard.nextInt();

                if(yourNumber>1)
                {
                        System.out.println("Your test number is "+yourNumber+", which is larger than "+1+" which is my number");
                }
                else
                {
                        System.out.print("Your test number is "+yourNumber+", which is smaller than or equal to "+1);
                        System.out.println(" which is my number.");
                }

                System.out.println("Enter a character for c: ");
                char c =keyboard.next().charAt(0);
                if(c!='a')
                {
                        System.out.println("Your c is "+c+", which is not equal to "+'a');
                }
                else
                {
                        System.out.println("Your c is "+c+", which is equal to "+'a');
                }

                for(int i=0;i<=3;i++)
                {
                        System.out.println("What do you get when you cross a shark and a snowman? Frostbite!");
                }
                while(counter<4)
                {
                        System.out.println("Baby Driver");
                        ++counter;
                }

        }
}
