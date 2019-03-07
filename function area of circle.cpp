#include<iostream>

using namespace std;

float area(float r)
{
	return 3.14*r*r;
}
int main()

{
	float rad;
	cout<<"enter radius : "<<endl;
	cin>>rad;
	
	cout<<"Area of circle : "<<area(rad);
	
 return 0;}
