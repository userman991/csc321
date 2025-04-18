//Jovanny Gonzalez
//CSC321-40

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void print(int n);

int main(void){
	int num;
	printf("Enter the number of times you want my name to print: \n");
	scanf("%d",&num);
	print(num);
}

void print(int n){
	for(int x=0;x<n;x++){
		printf("Jovanny Gonzalez\n");
	}

}

