//palindrome string 
#include<iostream>
#include<string>
#include<cstring>
#define n 20

using namespace std;

int main()
{
	char str[n];
	cin>>str;
	

	char rev[n];
	strcpy(rev,str);
	
	//char rev[n];
	strrev(rev);
	
	//int ans=strcmpi(str,rev);
	
	if(strcmpi(str,rev)==0)
		cout<<"it is palindrome";
	else
		cout<<"non palindrome";
	
	
 return 0;}
