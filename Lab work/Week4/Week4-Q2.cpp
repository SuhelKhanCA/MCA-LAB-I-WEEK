#include<iostream>
using namespace std;
int main(){
	int num1, num2;
	
	cout<<"Enter the numbes: ";
	cin>>num1>>num2;
	
	for(int i=1; i<=num2; i++){
		num1++;
	}
	cout<<"The sum is : "<<num1;
}
// Logic
/*
	n1 n2
	for(0 to n2)
		n1++
		
	print n1
*/
