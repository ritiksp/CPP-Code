//Calculating root of equation with conditional statementt
#include<iostream>
#include<cmath>

using namespace std;
 
 int main()
 {
 	float a, b, c;
	cout<<"let the quadratic equation be ax^2++bx+c"<<endl;
	cout<<"Enter a	";
	cin>>a;
	cout<<"Enter b	";
	cin>>b;
	cout<<"Enter c	";
	cin>>c;

	float D;
	D= sqrt(b*b-4*a*c);
	
	if(D<0)
	{cout<<"No real Roots";
	}
	else
	{
	
	cout<<"Roots of quadratic equation are"<<endl;
	cout<<"first root	"<<(-b+D)/(2*a)<<endl;
	cout<<"second root	"<<(-b-D)/(2*a)<<endl;
 }


 return 0;}
