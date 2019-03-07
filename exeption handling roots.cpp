#include <iostream>
#include<cmath>

using namespace std;

int main() 
{
	cout<<sqrt(-2);
	float a;
	cout<<"enter cofficient of x^2 \n";
	cin>>a;
	
	try
	{
		if(a==0)
			throw a;
		float b, c;
		cout<<"Enter cofficient of x and constant term \n";
		cin>>b>>c;
		float d=b*b-4*a*c;
		if(d<0)
			throw (double)d;
		if(d==0)
			{
			cout<<-b/(2*a);
			
			throw 'd';
			}
		cout<<"Root of equation are\n";
		cout<<"first root : "<<(-b+sqrt(d))/(2*a)<<endl;	
		cout<<"second root : "<<(-b-sqrt(d))/(2*a);			
		
	}
	
	catch (float x)
	{
		cout<<"a must be non zero otherwise equation is linear\n";
	}
	catch (double d)
	{
		cout<<"d must be greater than 0\n";
		cout<<"Imaginary roots \n";
		
	}
	catch (char ch)
	{
		
		cout<<"roots are equal  ";
		
	}
	
	
	
	return 0;	
}



