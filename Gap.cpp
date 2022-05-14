//binary gap

#include<stdio.h>

int findlargest(int number1,int number2){
	int result=number1>number2? number1:number2;
  return result;	
}

int findbirnaryGap(int number){
	int reminder, count=0,largestcount=0,tempcount=0;
	while(number>0){
		reminder=number%2;
		number=number/2;
		
		if(reminder==1){
			count=0;
		}
}
}

int main(){
	
	
	
	return 0;
}
	