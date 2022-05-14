
#include<stdio.h>

int solution(int A[], int N)
 {
     int found = 0;
     for (int i = 0; i < N; i++) 
     {     
         if (A[i] > 0)     
         {        
             found = 0;         
             for (int j = (i + 1); j < N; j++)
             {             
                 if (A[i] == A[j])             
                 {                 
                      A[i] = 0;                 
                      A[j] = 0;                 
                      found = 1;                 
                      break;             
                 }         
              }         
              if (found == 0)   
			  return A[i];       
//                   printf("\n The found number which is not doubled is %d \n",A[i]);     
         } 
      } 
      return -1;
 }
 
 int main(){
	
	int B[]={1,7,3,5,7,2,1,2,8,9};
	int size=sizeof(B)/sizeof(B[0]);
	int result=solution(B,size);
	printf("\n The result is %d \n", result);
	
	return 0;
}