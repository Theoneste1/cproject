//43) Write a program to print Fibonacci series without using recursion?
#include<stdio.h>

int main(){
	int a, i,start=0, second=1, next=1;

	printf("Please enter the number that you need its finacci :");
	scanf("%d",&a);
	
	printf("%d,%d,%d",start,second,next);
	
	for( i=1;i<=a-3;i++){
		start=second;
		second=next;
		next=start+second;
		printf(",%d",next);
	}
	printf("\n");
	return 0;

}