//no of days in a month
//make it short
#include<iostream>

using namespace std;

int main()

{
	char year;
	cout<<"If your year is leap them type i otherwise y	";
	cin>>year;
	
	int month;
	
	cout<<"Enter month to find days	";
	cin>>month;
	
	
	
	 switch(month)
    {
        case 2: 	if(year=='i')
						cout<<"29 days";
					else
						if(year=='y')
							cout<<"28 days";
						else
							cout<<"invalid input for year";
            break;

		case 4:
		case 6:
		case 9:
		case 11:cout<<"30 days";
            break;
        case 1: 
        case 3: 
        case 5: 
        case 7: 
        case 8: 
        case 10:
		case 12: cout<<"31 days";
            break;
    	default:cout<<"invalid input";   
    }
    

 return 0;}
 
