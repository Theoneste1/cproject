/*

that, given an array A of N integers, returns the smallest positive integer (greater than 0) that does not occur in A.

For example, given A = [1, 3, 6, 4, 1, 2], the function should return 5.

Given A = [1, 2, 3], the function should return 4.

Given A = [-1, -3], the function should return 1.

Write an efficient algorithm for the following assumptions:
*/

#include<stdio.h>
//void findsmallestNumber(int A[]){
//	int  arraySize=sizeof(A)/sizeof(A[0]);
//	int i,temp,k,j;
//	
//	//sorting the array by using the for loop
//	
//	for(i=0; i<arraySize; i++){
//		for(j=i+1; i<arraySize; j++){
//			
//			if(A[i]<A[j]){
//				temp=A[i];
//				A[i]=A[j];
//				A[j]=temp;
//					
//			}
//		}
//		
//	}
//	printf("The sorted array\n");
////	for(k=0;k<arraySize; k++){
////		printf("%d",A[k]);
////	}
//
//}
int main(){
	
	int A[]={2,45,7,1,3,4,9};
	int  arraySize=sizeof(A)/sizeof(A[0]);
	printf(" The size of array is %d",arraySize);
	int i,temp,k,j;
	
	//sorting the array by using the for loop
	
	for(i=0; i<arraySize; i++){
		printf("%d",A[i]);
		for(j=i+1; i<arraySize; j++){
			
			if(A[i]<A[j]){
				temp=A[i];
				A[i]=A[j];
				A[j]=temp;
					
			}
		}
		
	}
	printf("The sorted array\n");
	for(k=0;k<arraySize; k++){
		printf("%d",A[k]);
	}

	
	return 0;	
}