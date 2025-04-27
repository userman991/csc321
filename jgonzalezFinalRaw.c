
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <time.h>
#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>

//void jovannyFunction(void);
void jovannyFunction(int jovannyNum);
int main(int argc, char *argv[])
{
        int choice = 0;
        char name[30] = "bob";
        srand(time(NULL));

        printf("Please enter your name: ");
        scanf("%s",name);
        printf("Hello %s welcome to the RPG Game!\n",name);

        while(choice != 99)
        {
                puts("You find yourself in a dark room and you are not sure how you got here.");
                puts("As you look around you see the room has 55 doors, each labeled with a number.");

                puts("The room starts filling with water and you must choose a door to open or you will likely drown. you may quit anytime by selecting option 99.");

                puts("What door do you choose?");

                scanf("%d",&choice);

                switch(choice)
                {
                        case 42:
                        {

                                int room42Choice=0;
                                int room42Fruit=3;

				puts("room42");
                                printf("You have entered room 42.\n");
                                printf("Stranger: HELLO THERE! I'm sorry to ask you of this but my son is upset at the moment.\n");
                                printf("(As it approaches, It seems to be a talking bear with a basket. seems tired...)\n");
                                printf("Bear: A bird has stolen fruit from my boy. I've come to gather some fruit for him in a basket.\n");
                                printf("Bear: Can you bring it back to him for me? I need to rest my eyes.\n");
                                printf("(Enter the number 1 for yes. 2 is no.)\n");
                                scanf("%d",&room42Choice);
                                if(room42Choice==1)
                                {
                                        room42Choice=0;
                                        printf("%s: Sure I can!\n",name);
                                        printf("Bear: Thanks a ton!\n");
                                        printf("(You are given a basket with fruit)\n");
                                        printf("(You currently have %d fruit)\n", room42Fruit);
					room42Choice=0;
					printf("(You are going towards bear child.)\n");
					printf("(There are two paths, which will you take?)\n");
					printf("(Option 1: Bridge, Option 2: Around Bridge)\n");
					printf("Enter Option:");
					scanf("%d",&room42Choice);

					if(room42Choice==1)
					{
						room42Choice=0;
						printf("(You've gone to the bridge. You discover a troll.)\n");
						printf("Troll: I won't let you cross my bridge unless you pay a fee!(1 fruit)\n");
						printf("(Option 1: Pay, Option 2:Go around)\n");
						printf("Enter Option:");
						scanf("%d",&room42Choice);
					}

					if(room42Choice==1)
					{
						room42Fruit=2;
                                                printf("(You payed the fee. -1 fruit.)\n");
						printf("(You currently have %d fruit)\n", room42Fruit);
						printf("%s: That greedy troll.\n",name);
					}

					if(room42Choice==2)
					{

                                                printf("%s: I am going around.\n",name);
						printf("(You walk and walk and eventually arrive at a tree where you try to rest)\n");
						printf("Stranger:Buddy!\n(You look around and see a squirrel.)\n");
						printf("Squirrel:If you can climb this tree, I'll give you 2 fruit!\n");
						printf("Option 1:yes, Option 2:no.)\n");
						printf("Enter Option:");
                                                scanf("%d",&room42Choice);

						if(room42Choice==1)
						{
                                                
							room42Choice=0;

							//strength test
							//while int jovanny i<4
							//go to the function
							//generate a random num        
							printf("%s: I'll climb your tree.\n",name);
                                                        printf("(You are given a random number. Based on that number, you will climb or fail)\n");
							int jovannyRandomNum=1+(rand()%11);
							if(jovannyRandomNum<=4)                                                        
							{
								printf("Squirrel: You sure are strong! Here's your fruit!\n");
								printf("(+2 fruit)\n");
								room42Fruit+=2;
								printf("(You currently have %d fruit)\n", room42Fruit);
								//proceed
							}
							else
							{
								printf("Squirrel: You're gonna fall!\n");
								printf("(You fell on your basket, you lost 1 fruit)\n");
                                                                room42Fruit-=1;
                                                                printf("(You currently have %d fruit)\n", room42Fruit);
							}

						}
						if(room42Choice==2)
						{
                                                        printf("%s: I won't climb this tree, I'm going forward.\n",name);
						}

					}
					
					room42Choice=0;
					printf("(At this point in time, you are exhausted.)\n");
					printf("(You come across a strange man.)\n");
					printf("(seems to be a Wizard based on the clothes)\n");
                                        printf("Wizard: Hello traveler, I can take you to your destination in exchange of 1 fruit, do you accept?\n");
					//latest

					printf("Option 1:yes, Option 2:no.)\n");
					printf("Enter Option:");
					scanf("%d",&room42Choice);

					if(room42Choice==1)
					{
						room42Choice=0;			
						printf("Wizard:Wise Choice!\n");
                                                room42Fruit-=1;
                                                printf("(You currently have %d fruit)\n", room42Fruit);
					}

					if(room42Choice==2)
					{        
						room42Choice=0;
						printf("%s: I don't prefer to. I'm going to keep on walking!\n",name);
                                                printf("(You are now nearing the bear and by sheer luck you spot a bird's nest!)\n");
                                                printf("(Inside, although much was consumed, you managed to recover two fruit.)\n");
						room42Fruit+=2;
				
					}
				}

				printf("(Finally you arrive to child bear.)\n");
                                printf("(Let's see how you did. We are passing the fruit basket)\n");                
				printf("(You currently have %d fruit)\n", room42Fruit);
				jovannyFunction(room42Fruit);
				//present





                                if(room42Choice==2)
                                {
                                        printf("%s: I wish I could but I gotta go! I forgot something somewhere else...\n",name);
                                }

                                //jovannyFunction();
                                break;
                        }

			case 99:
			{
				puts("You have escaped");
				break;
			}

                        default:
                        {
                                puts("invalid choice");
                        }
                }
        }
        puts("Game Over");
        return EXIT_SUCCESS;
}

//place functions here

void jovannyFunction(int jovannyNum)
{
	//Unique Feature is here.
	//I am making an Array which can hold multiple strings, emotions
	//[Max number of strings],[Max length of each individual string]
	//joName is just a single string;
	//based on how well you did, you recieve an emotion as a score.
	char jovannyArray[7][11] = {"sad", "satisfied", "happy"};
	char joName[30] = "null";

        printf("Emotions are infectious.\n");
        printf("How well you did is based on the fruit retrieved.\n");

	if(jovannyNum<3)
	{                                        	        
		printf("You and child bear are feeling %s...\n", jovannyArray[0]);
	}

	if(jovannyNum<6&&jovannyNum>3)
	{
                printf("You and child bear are feeling %s.\n", jovannyArray[1]);
	}
	if(jovannyNum>=6)
	{
                printf("You and child bear are feeling %s!\n", jovannyArray[2]);
	}
	        
                printf("You have completed room42! Returning...\n");
}


