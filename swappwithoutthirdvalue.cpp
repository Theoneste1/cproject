//swapp without using the third variable

#include<stdio.h>
int main(){
	
	int number1=10,number2=24;
	
	printf("Before Swapp the value of number1 = %d and The value of number2 = %d \n", number1, number2);
	number1=number1+number2;
	number2= number1-number2;
	number1=number1-number2;
	printf("\n\n\n");
	printf("After Swapp the value of number1 = %d and The value of number2 = %d \n", number1, number2);
	
	return 0;
	
}