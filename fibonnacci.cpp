//Fibonacci Series using recursion in C

#include<stdio.h>

void printfibonacci(int number){
	
	static int n1=0,n2=1,n3; // using the static will help these variables to keep being here
	if(number>0){
		n1=n2;
		n2=n3;
		n3=n1+n2;
		printf(", %d",n3);
		printfibonacci(number-1);
	}
	
}

int main(){
	
	int number;
	int n1=0,n2=1;
	printf("Enter the number to look for its fibonacci:");
	scanf("%d",&number);
	printf("%d,%d",n1,n2);
	printfibonacci(number-2); // minus 2 because the first two numbers were already printed out
	
	return 0;
}