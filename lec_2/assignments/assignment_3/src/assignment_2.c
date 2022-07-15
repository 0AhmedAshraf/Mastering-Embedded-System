#include <stdio.h>
int main()
{
	int x,y,s;
	printf("Enter two integers:");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&x);
	scanf("%d",&y);
	s=x+y;
	printf("Sum: %d",s);
}
