#include<iostream>
using namespace std;
int main(){
	float a, b, c, d, e, f, g;
	cout<<"Enter the numbers 'a' to 'g' : ";
	cin>>a>>b>>c>>d>>e>>f>>g;
	
	float res =  ((a + b / c * d - e)* (f - g));
	
	cout<<"The result of the expression is: "<<res;
	
	return 0;
}
