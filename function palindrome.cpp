#include <iostream>

using namespace std;

void palindrome(int num)
{
	int temp=num;
	
	int revnum=0;
	for(;num>0;num/=10)
		revnum=revnum*10+num%10;
	
	if(revnum==temp)
		cout<<"Palindrome";
	else
		cout<<"not palindrome";		
	
}
int main()
{
	int n;
	cout<<"enter number to check palindrome ";
	cin>>n;
	palindrome(n);

  return 0;
}

