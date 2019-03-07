#include <iostream>
#include<cmath>


using namespace std;

void armstrongno(int n)
{
	int temp=n,count;
	
	
	for(count=0;n>0;count++,n/=10);
	
	
	n=temp;
	int sum;
	for(sum=0;n>0;n/=10)
	{
		sum+=pow(n%10,count);
	}
	

	if(sum==temp)
	{
		cout<<"it is armstrong no";
		
	}
	else 
		cout<<"it is not armstrong no";
}


int main()
{
	int num;
	cout<<"enter no check armstrong or not ";
	cin>>num;
	armstrongno(num);
	
  return 0;
}

