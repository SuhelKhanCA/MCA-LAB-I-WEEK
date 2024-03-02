#include<iostream>
using namespace std;
int main(){
	int num;
	cout<<"Enter the last number: ";
	cin>>num;
	int count=0;
	for(int i=1; i<=num; i++){
		for(int j=1; j<=i; j++){
			if(i%j==0){
				count++;
			}
			if(count==2){
				cout<<i<<" ";
			}
			
		}
	}
	return 0;
}
