/*The c programming which will provide the sounds*/

#include<stdio.h>

//entry of the application
int main(){
	
	int number;
	for(int i=0; i<=100; i++){
		printf("Enter the number from your keyboard: \n");
		printf("\a");
		scanf("%d",&number);
		printf("%d");
	}

return 0;
}