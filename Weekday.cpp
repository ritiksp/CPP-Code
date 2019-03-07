//week day name
#include<iostream>

using namespace std;

int main()

{
	int day;
	cout<<"enter a week day	";
	cin>>day;
	
	switch(day)
	{
		case 1 : cout<<"Monday";
					break;
		case 2 : cout<<"Tuesday";
					break;
		case 3 : cout<<"Wednessday";
					break;
		case 4 : cout<<"Thrusday";
					break;
		case 5 : cout<<"Friday";
					break;
		case 6 : cout<<"Saturday";
					break;
		case 7 : cout<<"Sunday";
					break;						
		default	 : cout<<"enter valid Week Day";												
	}
 return 0;}
