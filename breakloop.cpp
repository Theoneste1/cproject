//how to break the loop

#include<stdio.h>
int main(){
	
	int i=0;
	while(i<10){
		if(i==5){
			printf("\n The loop is stopping here \n");
			break;
		}
		printf("%d \t",i);
		i++;
	}
	
	return 0;
}