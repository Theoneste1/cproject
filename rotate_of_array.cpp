//Write a function rotate(ar[], d, 
//n) that rotates arr[] of size n by d elements
#include <stdio.h>


int retateArray(int arr[], int size, int retate_number){
	
	//changing the index of array value
	//copy of that array
	int tempArr[size], different, currentIndex, nextIndex;
	
	
	for(currentIndex=0; currentIndex<size; currentIndex++){
		
		nextIndex=currentIndex-retate_number;
		if(nextIndex<0){
			nextIndex=size+nextIndex;
		}
		tempArr[currentIndex]=arr[nextIndex];
	}
	
	   return tempArr;
}
	       
void printArray(int arr[], int size){
	
	for(int i=0; i<size; i++){
		printf("%d",arr[i]);
	}
	
  
}


int main(){
	
	int array[]={1,2,3,4,5,6,7};
	
	int k=retateArray(array,7,1);
	printArray(k,7);
	
	return 0;
}

