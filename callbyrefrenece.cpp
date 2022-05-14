//function pass by value won't change the value
//Yet by reference will change the value
//let us see the example.
#include<stdio.h>
 int changeNumber(int *num){
 	printf("Before changing the value inside the function number: %d \n",*num);
 	//change the value
 	(*num)+=100;
 	printf("After changing the value inside the function number : %d\n", *num);
 }
int main(){
	
	int a=100;
	printf("Before calling the function the value number: %d\n",a);
	//calling the function and pass the value by references
	changeNumber(&a);
	printf("After calling the function, the value number : %d\n",a);
	
	return 0;	
}

/*After trying the program which will pass by reference, I can see that
The value of the variables is changing because we are passing its refrence.
on line 16, calling the function will completely change the value of the variable num
*/