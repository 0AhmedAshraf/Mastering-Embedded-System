#include <stdio.h>
int main(){
char c;
printf("Enter an alphabet:");
fflush(stdin);
fflush(stdout);
scanf("%c",&c);
if(c=='a'||c=='A'||c=='e'||c=='E' || c=='i'|| c=='I'|| c=='o'||c=='O'||c=='u'||c=='U')
{
 printf("%c is a vowel.",c);
}
else
{
 printf("%cis a consonant.",c);
}
return 0;
}

