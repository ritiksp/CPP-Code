#include <iostream>

using namespace std;
int main()
{
int arr[20],i,n,sum=0,product=0;
cout<<"How many elements you want to enter?: ";
cin>>n;


cout << "Please enter " << n << " values to find their sum and product" <<endl;

for(i=0;i<n;i++)
{
cin >> arr[i];
cout << "value #" << i << ": " << arr[i] << " entered." << endl;
}

for(i=0;i<n;i++)
{
sum=sum+arr[i];
}

 for(i=0;i<n;i++)
 {
 product=product*arr[i];
}
cout<<"Sum is "<<sum<<endl;
cout<<"Product is "<<product;



 return 0;
}
