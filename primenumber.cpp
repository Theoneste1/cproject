//Prime Number program in C

#include<stdio.h>
int main(){
	
	int number, i, media,j,flag=0;
	
	while(1){
		
			printf("Enter the number: ");
	scanf("%d", &number);
	
	media=number/2;
	for(i=2;i<=media;i++){
		if(number%i==0){
			flag=1;
			printf("%d is not prime number!\n",number);
			break;
		}	
	}
	if(flag==0){
		printf("%d is prime number!\n", number);
	}
	
}
return 0;
		
	}
