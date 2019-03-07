#include <iostream>
using namespace std;

struct date
{
    int dd;
    int mm;
    int yy;
};

int main() 
{
    date d1;
    cout << "Enter information," << endl;
    cout << "Enter day : ";
    cin >> d1.dd;
    cout << "Enter month : ";
    cin >> d1.mm;
    cout << "Enter year : ";
    cin >> d1.yy;
    
    date d2;
    cout << "Enter information," << endl;
    cout << "Enter day : ";
    cin >> d2.dd;
    cout << "Enter month : ";
    cin >> d2.mm;
    cout << "Enter year : ";
    cin >> d2.yy;

    cout<<"Date entered "<<endl;
    if(d1.dd>31)
    {
	cout<<"invalid day"<<"/";
	}
	else
	cout<<d1.dd<<"/";
	
	if(d1.mm<0 && d1.mm>12)
	{
		cout<<"invalid"<<"/";
	}
	else
	cout<<d1.mm<<"/";
	
	cout<<d1.yy<<endl;
	
	
	cout<<"Date entered "<<endl;
    if(d2.dd>31)
    {
	cout<<"invalid day"<<"/";
	}
	else
	cout<<d2.dd<<"/";
	
	if(d2.mm<0 && d2.mm>12)
	{
		cout<<"invalid"<<"/";
	}
	else
	cout<<d2.mm<<"/";
	
	cout<<d2.yy<<endl;
		
	return 0;
}

