// The smallest integer from an array
#include<stdio.h>


int orderingTheNumbers(int A[],int n){
	int i,j,k,h,nextj=-1, noneNegative=0, temp;
	int positiveIntigers[n];

	for(i=0;i<n;i++){
		for(k=i+1; k<n;k++){
				if(A[i]>A[k]){
        //suapTwoNumbers(A[i],A[k]);
	temp=A[i];
	A[i]=A[k];
	A[k]=temp;
		}
	}
}

//after swapping
printf("\n---------------------Sorted --------------------\n");
for(k=0;k<n;k++){
	printf("%d\t",A[k]);
}

//finding the smallest element from the sorted array
int breaks;
for(j=0;j<A[n];j++){
	int start=0;
	while(start<=n && j!=A[start]){
	if(start+1==n){
		printf("\n The smallest number which is not found in the array is %d \n",j);
		breaks=1;
			break;
	}
	
		start++;	
}
if(breaks==1){
	break;
}

}
}


int main(){
	

//	 /
//	/calling the orderin array
	 int array[]={2,-5,-7,6,4,1,5,4,-1,0,8,7,5,3};
	 int n= sizeof(array)/sizeof(array[0]);
	 orderingTheNumbers(array,n);
	 
	 
	 
	 return 0;
}