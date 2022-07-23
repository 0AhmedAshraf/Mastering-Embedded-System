#include <stdio.h>
#include <stdlib.h>
int main() {
	float a[2][2];
	float b[2][2];
	float d[2][2];
	int r,c;
	printf("Enter the elements of 1st matrix \n");
		for(r=0;r<2;r++)
		{
			for(c=0;c<2;c++)
			{
				printf("Enter a %d %d ",r+1,c+1);
				fflush(stdout); fflush(stdin);
				scanf("%f",&a[r][c]);
			}
		}
	printf("Enter the elements of 2st matrix \n");
	for(r=0;r<2;r++)
	{
		for(c=0;c<2;c++)
		{
			printf("Enter b %d %d ",r+1,c+1);
			fflush(stdout); fflush(stdin);
			scanf("%f",&b[r][c]);

		}
	}
	for(r=0;r<2;r++)
	{
		for(c=0;c<2;c++)
		{
			d[r][c]=a[r][c]+b[r][c];
		}
	}
	printf("sum of matrix \n");
	for(r=0;r<2;r++)
	{

		for(c=0;c<2;c++)
		{
			printf("%1.1f ",d[r][c]);
		}
		printf("\n");
	}
}
