//Read a char and print its ASCII code (method 2)
#include<iostream>

using namespace std;

int main()

{
	char ch;
	
	cout<<"Enter any character	";
	cin>>ch;
	
	cout<<"char value is	"<<ch<<endl;
	int num=ch;		//implicit type casting (automatic conversion)
	cout<<"Its ASCII value is	"<<num;
	
 return 0;}
