#include<iostream>
using namespace std;
// Printing ASCII character correspoding to a digit
void ascii(int dig){
	if(dig>=65 && dig<=90){
		cout<<(char)dig;
		cout<<" : Entered digit corresponds to upper case character";
	}
	else if(dig>=97  && dig<=122){
		cout<<(char)dig;
		cout<<" : Entered digit corresponds to small case character";
	}
	else if(dig>=48   && dig<=57){
		cout<<(char)dig;
		cout<<" : Entered digit corresponds to decimal number";
	}
	else if(dig>=0  && dig<=47 || dig>=58  && dig<= 64  || dig>=123   && dig<=127 ){
		cout<<(char)dig;
		cout<<" : Entered digit corresponds to special character";
	}else{
		cout<<"Please enter correct digit.";
	}
}
int main(){
	int dig;
	cout<<"Enter the ASCII digit :";
	cin>>dig;
	char ch;
	ascii(dig);
}

