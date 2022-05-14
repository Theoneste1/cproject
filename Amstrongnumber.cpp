//Before going to write the c program to check whether the number
// is Armstrong or not, let's understand what is Armstrong number.

/*Armstrong number is a number that is equal to the sum of cubes of its digits. 
For example 0, 1, 153, 370, 371 and 407 are the Armstrong numbers.*/

#include<stdio.h>

int main(){

while(1){
	
	int number, sum=0, remind, temp;
printf("Please enter the number to check whether is Armstrong!:");
scanf("%d",&number);
temp=number; // keeping the number

while(number>0){
	
	remind=number%10; 
	sum=sum+(remind*remind*remind);
	number=number/10;
}	
if(temp==sum){
	printf("%d is Amrstrong because its product is %d\n",temp, sum);
	printf("\n\n");
}
else{
	printf("%d is not Amrstong because its product is %d\n",temp, sum);
	printf("\n\n");
}

}
return 0;
}