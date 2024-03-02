// C++ Program for Increment and Decrement Integer Using Pointer.
#include<iostream>
using namespace std;

int main(){

	int  num = 1;
	
	int *ptr = &num;
	++*ptr;
	cout<<"Incremented Number is :"<<num<<endl;
	--*ptr;
	--*ptr;
	cout<<"Decremented Number is :"<<num;	
	return 0;
}
