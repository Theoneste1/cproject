//Calling the function

#include<stdio.h>

int findSum(int a, int b){
	int sum;
	sum=a+b;
	return sum;
}

int main(){
	
	int number1=5;
	int number2=20;
	int result;
	result=findSum(5,20);
	
	printf("The sum of the function is %d ", result);
	
	return 0;
	
}