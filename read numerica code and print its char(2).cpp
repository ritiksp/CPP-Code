//Read numeric code and print its related characters
#include<iostream>

using namespace std;

int main()

{
	int num;
	
	cout<<"Enter numeric code	";
	cin>>num;
	
	char ch=(char)num;
	cout<<"character for numeric code is "<<ch<<endl; //explicit using type cast opretor
	
	
 return 0;}
