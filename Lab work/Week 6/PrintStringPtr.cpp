//C++ Program for Print String Using Pointer.
#include<iostream>
using namespace std;
int main(){
	
	string strr;
	cout<<"Enter the String: ";
	getline(cin,strr);
	
	string *ptr = &strr;
	
	cout<<*ptr;
	
	return 0;
}
