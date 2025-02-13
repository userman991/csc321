//Jovanny Gonzalez
//CSC321-40

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
	int i,x=4;
	float f=6.1;
	double d=9.112;
	char c='a';
	
	int arr[10]={0,4,5,2,3,9,18,90,13,27};
	
	printf("the number of myInt is %d, and its address is %p \n",x, &x);
	printf("the value of myFloat is %f, and its address is %p \n",f, &f);
	printf("the value of myDouble is %lf, and its address is %p \n",d, &d);
	printf("the letter of myChar is %c, and its address is %p \n",c, &c);

	{
		int myY=1209;
	}
	
	//printf("the value of myY is %d \n",y);

	for(i=0;i<10;i++)
	{
		printf("address of myArray[%d] with the initialized value %d =%p \n",i,arr[i],&arr[i]);
	}

	return EXIT_SUCCESS;
}
