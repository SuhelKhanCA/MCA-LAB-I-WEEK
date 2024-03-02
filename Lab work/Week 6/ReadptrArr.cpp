#include<iostream>
using namespace std;

int main(){
	
	int size;
	
	cout<<"Enter the size of array:";
	cin>>size;
	
	int *arr = new int[size];
	cout<<"Enter the elements of array: ";
	
	for(int i=0; i<size; i++){
		
		cin>>*(arr+i);			
		
	}
	
		cout<<"\nArray is : "<<"[ ";
	for(int i =0; i<size; i++){
		
		cout<<arr[i]<<" ";			
			
	}
	cout<<"] ";
 return 0 ;	
}
