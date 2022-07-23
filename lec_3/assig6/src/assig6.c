#include <stdio.h>
int main()
{
	char str[1000];
	char ch;
	int count=0;
	printf("Enter a string : ");
	fflush(stdin);
	fflush(stdout);
	gets(str);
	printf("Enter a character to find frequency :");
	fflush(stdin);
	fflush(stdout);
	scanf("%c",&ch);
	for(int i=0;str[i]!='\0';++i)
	{
		if(ch==str[i]){
			++count;
		}
	}
	fflush(stdin);
	fflush(stdout);
	printf("The frequency of %C = %d",ch,count);


}
