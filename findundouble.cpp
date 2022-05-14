// find the  array
//find the double

#include<stdio.h>

int sortingofarray(int A[],int N){
	
	int i,j,k=0,m,K,exist=0,temp;
	for(i=0;i<N;i++){
		for(j=i+1;j<N;j++){
			if(A[i]>A[j]){
			//suapping
			temp=A[i];
			A[i]=A[j];
			A[j]=temp;	
			}
			
		}
	}
	
	//check if the array is sorted
	
	for(m=0; m<N; m++){
		printf("%d \t",A[m]);
	}
	//find the double in arrat
	int number,v;

	for(v=0; v<N;v++){
		if(A[v]>0){
			//search it
				int found=0;
			for( int number=v+1;number<N;number++){
				if(A[v]==A[number]){
					A[v]=0;
					A[v+1]=0;
					found=1;
					break;
				}
				
			}
			if(found==0){
				printf("\n The number %d does not more than once exist\n ",A[v]);
				A[v]=0;
			}
			
		}
return -1;
}
}

int main(){
	
	int B[]={1,7,3,5,7,2,1,2,8,9};
	int size=sizeof(B)/sizeof(B[0]);
	int result=sortingofarray(B,size);
	
	return 0;
}