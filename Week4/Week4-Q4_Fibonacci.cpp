#include<iostream>
using namespace std;
int main(){
	
	int num;
	cout<<"Enter the the number : ";
	cin>>num;
	int n1 = 0;
	int n2 = 1;
	
	cout<<n1<<" ";
	cout<<n2<<" ";
	
	for(int i=2; i<=num; i++){
		int tmp = n2;
		n2= n1+n2;
		
		n1=tmp;
		//n2=res;
		cout<<n2<<" ";
	}
	return 0;
}
