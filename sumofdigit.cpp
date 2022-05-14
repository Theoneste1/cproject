/*
C program to sum each digit: We can write the sum of digits program in c 
language by the help of loop and mathematical operation only.
*/

#include<stdio.h>
int main(){
	while(1){
		
		int number,temp, sum=0,remind;
		printf("Please enter the number: ");
		scanf("%d",&number);
		temp=number;
		while(number>0){
			remind=number%10; //removing the last number
			sum=sum+remind; // adding the number
			number=number/10; //remaining
		}
		printf("The sum of the digits which consist of %d is %d\n", temp, sum);
	}
	
	return 0;
}
