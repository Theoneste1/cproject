//Smallest Subarray With a Greater Sum (easy)

#include<stdio.h>

int findsmallest(int a, int b){
	return a>b? b:a;
}

int findsmallessubarray(int A[], int N, int s){
	int sum=0, minimum=0, previousminimum, i=0, j=0;
	for(i=0;i<N;i++){
		sum=0;
		
		for(j=i;j<N;j++){
			
				printf("%d \t",A[j]);
				sum=A[j]+sum;
				if(sum>=s){
						printf("==The sum gained is %d \n",sum);
						minimum=sum;
						break;
				}
			
		}                                          
		                                          
		previousminimum=findsmallest(minimum,previousminimum);
		
	}
//	return previousminimum;
printf("The reuskt is %d \n",previousminimum);
}
int main(){
	
	int B[]={2, 3, 4, 1, 5};
	int s=7;
	int N =sizeof(B)/sizeof(B[0]);
	int result=findsmallessubarray(B,N,s);
    //printf("The result is %d ",result);


return 0;	
	
}