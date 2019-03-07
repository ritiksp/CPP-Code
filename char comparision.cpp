//check for case
#include<iostream>

using namespace std;

int main()

{
	char ch;
	cout<<"enter a character	";
	cin>>ch;
	
	if(ch>='A' && ch<='Z')
	cout<<ch<<" Uppercase alpha";
	else{
		if(ch>='a' && ch<='z')
		cout<<ch<<" Lower letter";
		
		else 
		cout<<"not aplha";
	}
 return 0;}
