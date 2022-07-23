#include <stdio.h>
int main()
{
	char str[1000];
	int count=0;
	printf("Enter a string : ");
	fflush(stdin);
	fflush(stdout);
	gets(str);
	for(int i=0;str[i]!='\0';i++)
	{
		count++;
	}
	fflush(stdin);
	fflush(stdout);
	printf("The length of string : %d",count);
}
