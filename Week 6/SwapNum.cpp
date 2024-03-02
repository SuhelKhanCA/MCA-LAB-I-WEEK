// C++ program to swap two numbers using pointers
#include<iostream>
using namespace std;

void swapNum(int *num1, int *num2){
	
	int temp;
	 temp = *num1;
	 *num1= *num2;
	 *num2= temp;
	 
	 cout<<"Number 1 ="<<*num1<<endl;
	 cout<<"Number 2 = "<<*num2;
}

int main(){
	
	int num1;
	cout<<"Enter the first number :" ;
	cin>>num1;
	
	
	int num2;
	cout<<"Enter the second number :" ;
	cin>>num2;
	
	swapNum(&num1, &num2);
	
	return 0;
}
