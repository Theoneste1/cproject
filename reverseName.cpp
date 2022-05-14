//The function which will reverse the name
#include<stdio.h>
#include<cstring>


// main function
int main(){
	 char name[20];
	 int i=0;
	 
	 int size=sizeof(name)/sizeof(name[0]);
	 int number=0;
	 printf("Enter the name please:");
	   scanf("%s",&name);
	 while(name[i]!='\0'){
	 	number++;
	   printf("The size of this %s is %d \n",name,size);
	   i++;
	 }
	 printf("The length of your name is %d \n", number);

printf("The reversed character will be %s", strrev(name));
	 
	 return 0;
}