#include <stdio.h>
int main()
{
	float x,y,s;
	printf("Enter two integers:");
	fflush(stdin);
	fflush(stdout);
	scanf("%f",&x);
	scanf("%f",&y);
	s=x*y;
	printf("Sum: %f",s);
}
