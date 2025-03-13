// Jovanny Gonzalez
// CSC 321-40

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	srand(time(NULL));

	int guess;
	int y=1+(rand()%21);

	while(guess<1||guess>20)
	{
		printf("Guess a number between 1-20: \n");
		scanf("%d",&guess);
	
		if(guess<1||guess>20)
		{
			printf("Out of Range,re-enter guess.\n");
		}

	}

	if (guess!=y){
	printf("Guess does not equal my random number,Y: %d\n",y);

		if (guess>y)
		{
			printf("Guess is greater than Y, you lose.\n");
		}
		if (guess<y)
		{
			printf("Guess is less than Y, you lose.\n");
		}
	}

	if (guess==y)
	{
		for(int i=0;i!=y;i++){
		printf("You win. Guess is equal to Y\n");
		}
	}



	return EXIT_SUCCESS;
}

