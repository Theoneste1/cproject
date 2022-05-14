//use of goto function
#include<stdio.h>
int main(){
	int i, j, k, m,product=1;
	
	table5:
		for(k=1;k<3;k++){
			if(k==2){
					for(m=1;m<7;m++){
				product=m*k;
				printf("%d x%d =%d \n",k,m,product);
			}
			printf("\t");
				
			}
		
			
		}
	
	for(i=0;i<5;i++){
		if(i==3){
			goto table5;
			break;
		}
	}
}