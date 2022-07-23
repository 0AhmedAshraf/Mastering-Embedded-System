#include<stdio.h>
int main(){
   int student[40],pos,i,size,value;
   fflush(stdin);
   fflush(stdout);
   printf("enter no of elements in array of students:");
   scanf("%d",&size);
   fflush(stdin);
   fflush(stdout);
   printf("enter %d elements are:\n",size);
   for(i=0;i<size;i++)
      scanf("%d",&student[i]);
   fflush(stdin);
   fflush(stdout);
   printf("enter the position where you want to insert the element:");
   scanf("%d",&pos);
   fflush(stdin);
   fflush(stdout);
   printf("enter the value into that poition:");
   scanf("%d",&value);
   fflush(stdin);
   fflush(stdout);
   for(i=size-1;i>=pos-1;i--)
      student[i+1]=student[i];
   student[pos-1]= value;
   fflush(stdin);
   fflush(stdout);
   printf("final array after inserting the value is\n");
   for(i=0;i<=size;i++)
	   fflush(stdin);
	   fflush(stdout);
      printf("%d\n",student[i]);
   return 0;
}
