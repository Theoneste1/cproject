//subarrays
//Given an array of positive numbers and a positive number ‘k,’ 
//find the maximum sum of any contiguous subarray of size ‘k’.


#include<stdio.h>

int returnMaximum(int a ,int b){
	return( a>b? a:b);
}

int maximumsubarray(int A[], int N, int k){
	int i, j, sum=0, maximum=0,previousSum=0;
	
	for(i=0;i<N-k+1;i++){
		sum=0;
		for(int j=i; j<i+k; j++){
			printf("%d",A[j]);
			sum=A[j]+sum;	
		}
		
		//printf(" the sum of every %d number is %d \n",k, sum);
//		if(sum>previousSum){
//			previousSum=sum;
//		}
		
		previousSum = returnMaximum(sum,previousSum);
	}
	
return previousSum ;
	
}

int main(){
	
	int B[]={2, 3, 4, 1, 5};
	int k=2;
	int N =sizeof(B)/sizeof(B[0]);
	int result=maximumsubarray(B,N,k);
    printf("The result is %d ",result);


return 0;	
	
}