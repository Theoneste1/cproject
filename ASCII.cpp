/*The programming which will display the ASCII*/

#include<stdio.h>
#include<conio.h>
#include<iostream>
int main(){
	char letter,ch;
	int i;
	
	for(i=0; i<=25; i++){
		printf("\n \n Enter the character to  check its corresponding number:  ");
		scanf("%c",&letter);
		printf("\n =====> %c ==%d ",letter,letter);
//		printf("\a");
	}
	
	return 0;
}
