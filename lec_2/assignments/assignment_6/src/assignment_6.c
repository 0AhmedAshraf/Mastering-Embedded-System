#include <stdio.h>
int main()
{
	float a,b;
	printf("Enter value of a:");
	fflush(stdin);
	fflush(stdout);
	scanf("%f",&a);
	printf("Enter value of b:");
	fflush(stdin);
	fflush(stdout);
	scanf("%f",&b);
	printf("After swapping, value of a = %f \n",b);
	printf("After swapping, value of b = %f",a);

}
