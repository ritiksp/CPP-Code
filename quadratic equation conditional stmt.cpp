//quadratic equation
#include<iostream>
#include<cmath>

using namespace std;

int main()

{
	float a, b, c;
	cout<<"let the equation be ax^2+bx+c"<<endl;
	cout<<"Enter a	";
	cin>>a;
	cout<<"Enter b	";
	cin>>b;
	cout<<"Enter c	";
	cin>>c;
	
	float D=sqrt(b*b-4*a*c);
	
	if((b*b-4*a*c)<0)
	{cout<<"No real root";
	}
	else{
	cout<<"Root of equationn is"<<endl;
	cout<<"First root is	"<<(-b+D)/(2*a)<<endl;
	cout<<"Second root is	"<<(-b-D)/(2*a)<<endl;
	}
 return 0;}
