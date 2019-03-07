//switch case
#include<iostream>

using namespace std;

int main()

{
	char aop;
	cout<<"enter a arithematic opretor	";
	cin>>aop;
	
	switch(aop)
	{
		case '+' : cout<<"addition op";
					break;
		case '-' : cout<<"substraction op";
					break;
		case '/' : cout<<"division op";
					break;
		case '*' : cout<<"multiplication op";
					break;
		case '%' : cout<<"Modulus op";
					break;
		default	 : cout<<"enter valid opretor";												
	}
 return 0;}
