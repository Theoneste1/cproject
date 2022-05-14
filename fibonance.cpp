// fibonace series, recursion
#include<stdio.h>
int fibonanceFindings(int *number){
	
	if(*number==1){
		return 1;
	}
	else if(*number==0){
		return 0;
	}
	else{
		
		
		return (*number)-fibonanceFindings(*number);
	}
}

int main(){
	int number, result;
	while(1){
		printf("Kindly enter the number that you want to check its fibonancy: \n");
		scanf("%d",&number);
		result=fibonanceFindings(&number);
		
		printf("The fibonancy of %d =%d \n",number, result);
	}
	
	return 0;
}