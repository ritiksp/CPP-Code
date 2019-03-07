//maximum of three number
#include<iostream>

using namespace std;

int main()

{
	float a, b, c;
	cout<<"please enter three number	"<<endl;
	cin>>a>>b>>c;
	
	if(a>b && a>c)
	cout<<a<<"	is greatet among these";
	else {
		if(b>c)
		cout<<b<<"	is greatet among these";
		else 
		cout<<c<<"	is greatet among these";
		}
	

 return 0;}
