// Program to check whether a number is Armstrong or Not
#include<iostream>
using namespace std;
int main(){
	int num;
	cout<<"Enter the number: ";
	cin>>num;
	
	int sum = 0;
	int tmp=num;
	while(tmp!=0){
		
		int rem  = tmp%10;
		tmp = tmp/10;
		sum = sum+rem*rem*rem;
	}
	
	if(sum==num){
		cout<<"The entered number is Armstrong number.";
	}else{
		cout<<"The entered number is not Armstrong number.";
	}
	
	return 0;
}
