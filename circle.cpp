#include <iostream>
#include<fstream>
#include<stdio.h>

using namespace std;

int main()
{
	int T;
	cout<<"Enter Number of Test Cases";
	cin>>T;
	
	char name1[50], name2[50];	//name1 = input using cin; name2 = using gets();
	cout<<"Enter your name: "; 
	cin>>name1;	// input using cin - excludes text after space
	cout<<"Enter your name again: "; 
	gets(name2); // input using gets(); - includes everything with space
	cout<<"name1 = "<<name1<<endl;	// shows name1
	cout<<"name2 = "<<name2;	// shows name2
	
	return 0;
}




