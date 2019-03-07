#include <iostream>

using namespace std;

int max(int a, int b, int c=0)
{
	if(a>b && a>c)
	{
		return a;
	}
	else 
	{
		if(b>c)
		{
			return b;
		}
		else 
		return c;
	}
}


int main()
{	
	int a, b;
	
  	cout<<"Enter any 2 interger "<<endl;
  	cin>>a>>b;
  	
  	cout<<"Maximum number is"<<max(a,b);
  
    return 0;
}

