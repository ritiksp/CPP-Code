//read uppercase letter and convert into lower case letter
#include<iostream>

using namespace std;

int main()

{
	char ch;
	
	cout<<"Enter uppercase letter	"<<endl;
	cin>>ch;
	
	int num=(int)ch;//explicit type cast opretor
	
	cout<<"Lowercase letter is		"<<endl<<(char)(num+32);
	
 return 0;}
