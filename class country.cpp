#include <iostream>
#include<string>
#include<cstring>

using namespace std;

class country
{
	private:
		char name[20], capital[20], pm[20];
		
	public:
		void getcountry(){
			cout<<"Enter Country Name, Capital & Prime Minister  : "<<endl;
			cin>>name;
			cin>>capital;
			cin>>pm;
			
		}	
		
		void showcountry(){
			cout<<"Country Name : "<<name<<endl;
			cout<<"Country Capital : "<<capital<<endl;
			cout<<"country Prime Minister : "<<pm<<endl;
			
			
		}
		
		country()
		{
			name[0]='\0';
			capital[0]='\0';
			pm[0]='\0';
		}
		country(char name[20], char capital[20], char pm[20])
				{
					strcpy(this->name, name);
					strcpy(this->capital, capital);
					strcpy(this->pm, pm);
					
				}
				
		country (country &C)
				{
					strcpy(name,C.name);
					strcpy(capital,C.capital);
					strcpy(pm,C.pm);
				}		
};

int main()
{
  	country C1;
	  
	  
	  C1.getcountry();
	  C1.showcountry();
	  
	  
	/*  country C2("India", "Dehli", "Shri Narendra Modi");
	  C2.showcountry();*/
	  
	  country C3(C1);
	  C3.showcountry();
	  
    return 0;
}

