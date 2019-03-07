//check for case
#include<iostream>

using namespace std;

int main()

{
	char ch;
	cout<<"enter a alpha	";
	cin>>ch;
	
	
	if(ch>='a' && ch<='z')
	{
	ch=ch-32;
	cout<<"Related uppercase aphla is "<<ch;}
	else
		if(ch>='A' && ch<='Z')
		{
		ch=ch+32;
		cout<<"Related lower case letter is "<<ch;}
		else
		cout<<"Please enter valod aplha";


 return 0;}
