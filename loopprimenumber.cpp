//for loop for all the prime number

#include<stdio.h>
int main(){
	int media, i, j, number, flag;
	
	printf("Enter the number :");
	scanf("%d", number);
	
	for( i=2; i<=number; i++){
		media=i/2;
		flag=0;
		for( j=2;j<=media; j++){
			if(i%j==0){
				flag=1;
//				break;
				printf("This  not please\n");
			}	
		}
		if(flag==0){
			printf("%d",i);
			printf("It is please\n!");
		}
	}
return 0;
	
}