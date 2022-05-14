//This the test of my work

#include<stdio.h> 
#include<string.h> 

struct student{
	char name[20];
	int age;
} s1;

main()  
{      
    printf("Enter the name of the student : \n");
    scanf("%s",&s1.name);
    printf("Kindly enter the age of the student :\n");
    scanf("%d",&s1.age);
    
    //printing out the values.
    printf("The student name is %s \n",s1.name);
    printf("The student age is %d \n", s1.age);
    return 0;
}  
