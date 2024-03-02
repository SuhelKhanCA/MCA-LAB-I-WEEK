// C++ program for reading elements using a pointer into an array and display the
// values using an array

#include<iostream>
using namespace std;

int main(){
	
	int size;
	
	cout<<"Enter the size of array:";
	cin>>size;
	
	int *arr = new int[size];
	cout<<"Enter the elements of array: ";
	
	for(int i=0; i<size; i++){
		
		cin>>arr[i];			
		
	}
	
	cout<<"\nArray is : "<<"[ ";
	for(int i =0; i<size; i++){
		
		cout<<arr[i]<<" ";			
		
	}
	cout<<"]"<<endl;
	
	int *ptr = &arr[0];
	
	cout<<"\nAdress of elements first of the array is :"<<ptr<<endl;
	cout<<"\nValue of first elements using pointer is :"<<*ptr<<endl;
	
	
	cout<<"\n printing Array using pointer :";
	cout<<"[";
	for(int i = 0; i<size; i++){
		
		cout<<*(arr+i)<<" ";
	}
	cout<<"]";
	return 0;
}
