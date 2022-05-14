//c++ programming language

#include<iostream>
using namespace std;

//calling the function by values

int call_by_reference(int &number){
	//int *result =(number)*2;
	number*=2;
	//return result;
}
//call by value
int call_by_values(int number){
	number*=2;
	//return answer;
}


int main(){
	
  int a_number=5, b_number=5;
  cout <<"before calling the function"<< "a_number ="<<a_number<<"\t"<<"b_number ="<<b_number<<"\n"<<endl;
  call_by_reference(a_number);
  call_by_values(b_number);
	cout <<"After calling the functions"<< "a_number ="<<a_number<<"\t"<<"b_number ="<<b_number<<"\n"<<endl;
  
	
	return 0;
}