/*The programming c counting the character of specific name*/
/*This programming will change the entered name and change it into number and then add them*/
//As we  know in ASCII, every character has its own corresponding number
// 
#include<stdio.h>
int main(){
	
	char name[20];
	int sum=0;
	
	printf("Enter the name: ");
	scanf("%s",&name);
	int i=0;
	//Checking if the character at specific position is not empty
	//Then assign it to the corresponding number
	while(name[i]!='\0'){
		printf(" \n %c ==>>%d ",name[i],name[i]);
		sum=sum+name[i];
		printf("The sum of your name is %d", sum);
		i++;	
	}
	
	return 0;
}