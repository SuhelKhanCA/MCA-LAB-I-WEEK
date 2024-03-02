// C++ Program to print adress of a variable using pointer
#include<iostream>
using namespace std;
int main(){
	
	int num1;
	
	int *ptr =&num1;
	
	cout<<"The adress of the variable is :"<<ptr;
	
	return 0;
}
