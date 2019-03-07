#include<iostream>

using namespace std;

void swap(int a, int b)
{
	int c=a;
		a=b;
		b=c;
	
	cout<<"After swaping number are	"<<a<<"\t"<<b;	
		
}
int main()

{
	int x, y;;
	cout<<"Enter two nuumber : "<<endl;
	cin>>x>>y;
	swap(x,y);
	
 return 0;}
