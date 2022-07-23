#include <stdio.h>
#include <stdlib.h>
int main()
{
int n,i;
float num[100],sum=0.0,avg;
printf("Enter the number of data ");
fflush(stdin);
fflush(stdout);
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("%d. Enter number: ",i+1 );
fflush(stdin);
fflush(stdout);
scanf("%f",&num[i]);
sum+=num[i];

}
avg=sum/n;
		printf("Average = %0.2f" , avg);
}
