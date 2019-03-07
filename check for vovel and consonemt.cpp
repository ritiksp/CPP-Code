//check for case
#include<iostream>

using namespace std;

int main()

{
	char ch;
	cout<<"Enter a alphabet	";
	cin>>ch;;
	
	if((ch>='a' && ch<='z' || ch>='A' && ch<='Z') && (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U'))
	cout<<ch<<"	This is a vovel";
	
	else 
	cout<<ch<<"	It is a consonent";
	
	
 return 0;}
