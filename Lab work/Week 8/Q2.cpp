// C++ program to check palnindrome
// string using constructor
#include <bits/stdc++.h>
using namespace std;
int main()
{
	string str = "level";

	// Use of reverse iterators
	string rev = string(str.rbegin(), str.rend());

//	cout << rev << endl;
	
	if(str==rev){
		cout<<"Palindrome";
	}else{
		cout<<"Not palindrome";
	}
	return 0;
}

