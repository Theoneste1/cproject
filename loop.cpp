//loop

#include<stdio.h>
int main(){
	
	int i,j, k;
	for(i=1; i<=3; i++){
		for(j=1, k=i; j<=10; k+=i, j++){
			
			printf("%d\t",k);
			
		}
		printf("\n\n");
	}
	
	return 0;
}