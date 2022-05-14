//baab c programming language
//This is the programming which will be providing the voice!

#include<stdio.h>
int main(){
	int i, number;
	
	for(i=0; i<10; i++){
		printf("Enter the number please :");
		scanf("%d",&number);
		printf("\a");
		printf("\n");
	}
}