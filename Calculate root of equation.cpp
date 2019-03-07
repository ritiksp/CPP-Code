//Calculating root of equation
#include<iostream>
#include<cmath>

using namespace std;

int main()

{
	float a, b, c;
	cout<<"let the quadratic equation be ax^2++bx+c"<<endl;
	cout<<"please make sure that discriminant of his is quadratic equation is positive otherwise there will be no solution"<<endl;
	//how to remove No solution problem?
	cout<<"Enter a	";
	cin>>a;
	cout<<"Enter b	";
	cin>>b;
	cout<<"Enter c	";
	cin>>c;

	float D;
	D= sqrt(b*b-4*a*c);
	cout<<"Roots of quadratic equation are"<<endl;
	cout<<"first root	"<<(-b+D)/(2*a)<<endl;
	cout<<"second root	"<<(-b-D)/(2*a)<<endl;
	
	
 return 0;}
