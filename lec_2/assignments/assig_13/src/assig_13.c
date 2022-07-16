#include <stdio.h>
int main() {
	int n, count;
	unsigned long long int factorial=1;
	printf("Enter an integer: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d", &n);
	if(n<0)
		printf("Error!!! Factorial of negative number doesnot exist");
	else
	{
		for(count=1;count<=n;++count)
		{
			factorial*=count;
		}
		printf("Factourial = %lu",factorial);
	}



}
