/*
 ============================================================================
 Name        : assignment_9.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(){
	float x,y,z;
	printf("Enter three numbers");
	fflush(stdin);
	fflush(stdout);
	scanf("%f %f %f",&x,&y,&z);
	if(x>y&&x>z){

		printf("largest number : %f",x);
	}
	if(y>x&&y>z){

		printf("largest number : %f",y);
	}
	if(z>y&&z>x){

		printf("largest number : %f",x);
	}
}
