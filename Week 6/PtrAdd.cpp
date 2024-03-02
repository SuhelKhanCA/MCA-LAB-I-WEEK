//C++ Program for Add Two Numbers Using Pointer.
#include<iostream>
using namespace std;
void sum(int num1, int num2){
	
	
	int* ptr1 = &num1;
	int* ptr2 = &num2;
	
	int sum  = *ptr1 + *ptr2;
	
	cout<<"The sum of the number is : "<<sum;
}
int main(){
	
	int num1;
	cout<<"Enter the first number :";
	cin>>num1;
	
	int num2;
	cout<<"Enter the second number :";
	cin>>num2;
	
	sum(num1, num2);
	return 0;
}
