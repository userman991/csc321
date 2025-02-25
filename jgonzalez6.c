// Jovanny Gonzalez
// CSC 321-40

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
	int x=4;
	int y=6;
	double dx=4;
	double dy=6;
	int a, b, c;
	double da, db, dc;

	a = x + y * x / y - x;
	b = -x - y / x * y + x;
	c = x + y - x / y;

	da = dx + dy * dx / dy - dx;
	db = -dx - dy / dx * dy + dx;
	dc = dx + dy - dx / dy;

	printf("The value of x is %d, and the value of y is %d\n",x, y);
	printf("With the result being int, \n");
	printf("x+y*x/y-x=%d\n",a);
	printf("-x-y/x*y+x=%d\n",b);
	printf("x+y-x/y=%d\n",c);

	printf("\nThe value of dx is %lf, and the value of dy is %lf\n",dx, dy);
	printf("With the result being double,\n");
	printf("dx+dy*dx/dy-dx=%lf\n",da);
	printf("-dx-dy/dx*dy+dx=%lf\n",db);
	printf("dx+dy-dx/dy=%lf\n",dc);
	
	return EXIT_SUCCESS;
}
