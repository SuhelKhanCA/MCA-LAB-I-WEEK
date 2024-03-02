// C++ program to concatenate two strings using pointers.
#include<iostream>
using namespace std;

int main(){
	
	string s1, s2, *str1, *str2;
	
	cout<<"Enter the first string : ";
	cin>>s1;
	
	cout<<"Enter the second string : ";
	cin>>s2;
	
	str1=&s1;
	str2=&s2;
	
	cout<<"concate : "<<*str1 + *str2;
	
	return 0;
}
