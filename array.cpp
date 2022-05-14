
// to find the smallest number from array

#include<stdio.h>

void arraySort( int arr[], int N){
	
//	int size=sizeof(arr)/sizeof(arr[0]);
	int i, j, frequency=0,suap,result;
	for(i=0;i<N;i++){
		for(j=i+1;j<N;j++){
			if(arr[i]>arr[j]){
				
				suap=arr[i];
				arr[i]=arr[j];
				arr[j]=arr[i];
				
			}
		}
	}
	
	for(i=0;i<N;i++){
		printf("%d \t",arr[i]);
	}
	
//	result=arr[];
//	return result;
}

int main(){
	
	int array[]={2,4,1,0,7,12,4,8};
	int size=sizeof(array)/sizeof(array[0]);
	printf("The size of an array is %d",size);
//	printf("The following is the answer: ");

printf("\n----------------------------------\n");
arraySort(array,size);
printf("\n----------------------------------\n");
	
	return 0;	
}