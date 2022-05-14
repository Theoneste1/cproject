//swapping which will call the value by reference

#include<stdio.h>

//function for swapping the values

void swapValues(int *a, int *b){
	printf("Before swapping inside the function the value of a=%d and value of b=%d \n",*a,*b);
	//swapp the values
	int temp=*a;
	*a=*b;
	*b=temp;
	printf("After swapping inside the function the values of a=%d and value of b=%d \n",*a,*b);
}

int main(){
	int a=10, b=20;
printf("Before calling the function the values of a=%d and b=%d \n",a,b);
//let us call the function
swapValues(&a,&b);
printf("After calling the function the values of a=%d and b=%d \n",a,b);

return 0;	
}