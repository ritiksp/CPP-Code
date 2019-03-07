#include <iostream>


using namespace std;

int main() 
{
	
	int a, b;
	cout<<"entter two number\n";
	cin>>a>>b;
	
	try
	{
		if(b==0)
		throw b;
		cout<<a/b;
	}
	catch (int x)
	{
		cout<<"demoninator must be non zero";
		}	
	return 0;	
}



