/*
We can reverse a number in c using loop and arithmetic operators. In this program, we are getting number as input from the 
user and reversing that number. Let's see a simple c example to reverse a given number.
*/

#include<stdio.h>
int main(){
	 while(1){
	 	int number, remind, sum=0, temp;
	 	printf("Please enter the number reverse:");
	 	scanf("%d",&number);
	 	temp=number;
	 	while(number>0){
	 		remind=number%10;
	 		sum= (sum*10)+remind;
	 		number=number/10;
		 }
		 
		printf("After reversing the %d it becomes %d\n",temp,sum); 
	 	
	 }
	 return 0;
}