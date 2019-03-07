#include<iostream>

using namespace std;

float perimeter(float r)
{
	return 2*3.14*r;
}
int main()

{
	float rad;
	cout<<"enter radius : "<<endl;
	cin>>rad;
	
	cout<<"perimeter of circle : "<<perimeter(rad);
	
 return 0;}
