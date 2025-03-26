//Jovanny Gonzalez
//CSC321-40

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double hypotenuseTriangle(int thisBase,int thisHeight);

int main(void)
{
	int base;
	int height;
	double length;
	
	printf("Enter the base of a triangle right triangle: \n");
	scanf("%d",&base);

	printf("Enter the height of a triangle right triangle: \n");
        scanf("%d",&height);

	length=hypotenuseTriangle(base,height);
	printf("Hypotenuse: \n");
	printf("%lf",length);
	printf("\n");
	return EXIT_SUCCESS;
}

double hypotenuseTriangle(int thisBase,int thisHeight)
{
	double hypotenuseLength;
	int x=thisBase*thisBase;
	int y=thisHeight*thisHeight;
	double total=x+y;
	hypotenuseLength=sqrt(total);
	return hypotenuseLength;
}
