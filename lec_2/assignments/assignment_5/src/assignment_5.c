#include <stdio.h>
int main()
{
	char x;
	printf("Enter a character:");
	fflush(stdout);
	fflush(stdin);
	scanf("%c",&x);
	printf("ASCII value of %c = %d ",x,x);
}
