//passing the value by value
#include<stdio.h>

void changeNumber(int num){
	 
	//printing the number 
	printf("The value of the number inside the function before changing it :%d\n",num);
	num+=100;
	printf("The value of the number inside the function after changing it : %d\n", num);
}

int main(){
	int a=100;
	printf("The value of the number before calling the function :%d\n",a);
	changeNumber(a);
	printf("The value of the number after calling the function :%d\n",a);
	
	return 0;
}