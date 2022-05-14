//Palindrome program in C

#include<stdio.h>
int main(){
	
	
	while(1){
		int temp;
		int number, sum=0, remind;
		printf("Enter the number:");
		scanf("%d",&number);
		temp=number; //keeping the number in temp
		while(number>0){
				remind=number%10;
				sum=(sum*10)+remind;
				number=number/10;
		}
	if(sum==temp){
		printf("%d is Plindrome \n",sum);
	}
	else{
		printf("%d is not Plindrome\n",sum);	
	}
		
	}
	
	return 0;
}