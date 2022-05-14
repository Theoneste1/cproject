//fuction to return if the function is odd or even
#include<stdio.h>

int isEvenNumber(int n){
	if(n%2==0){
		return 1;
	}
	else{
		return 0;
	}
}
int main(){
	 
	 int a, result;
	 while(1){
	 	printf("Enter the number to check with\n");
	 	scanf("%d",&a);
	 result=isEvenNumber(a);
	 if(result==1){
	 	printf("The number is even!\n");
	 }
	 else{
	 	printf("The number is not even!\n");
	 }
}
	 return 0;
	
}