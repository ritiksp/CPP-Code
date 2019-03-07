//vowel and consonant
#include<iostream>

using namespace std;

int main()

{
	char ch;
	cout<<"enter a alphabet	";
	cin>>ch;
	if(ch>='a' && ch<='z' || ch>='A' && ch<='Z')
{

	switch(ch)
	{
		case 'a' : 
		case 'e' : 
		case 'i' : 
		case 'u' : 				
		case 'A' : 
		case 'E' : 
		case 'I' : 
		case 'O' : 
		case 'U' : cout<<ch<<"	is a vowel";
					break;
		default : cout<<ch<<"	is consonant";
	}
}
else
cout<<"enter valid alpha";
	
 return 0;}
