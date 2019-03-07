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
				
				~country()
				{
					cout<<"Destructor country\n";
				}		
};


class state : country
{
	private:
		char name[20], capital[20], cm[20];
		
	public:
		void getstate(){
			
			getcountry();
			cout<<"Enter State Name, Capital & Chief Minister  : "<<endl;
			cin>>name;
			cin>>capital;
			cin>>cm;
			
		}	
		
		void showstate(){
			
			showcountry();
			cout<<"State Name : "<<name<<endl;
			cout<<"State Capital : "<<capital<<endl;
			cout<<"State Chief Minister : "<<cm<<endl;
			
			
		}
		state()
		{
			name[0]='\0';
			capital[0]='\0';
			cm[0]='\0';
		}
		state(char name[20],char capital[20],char pm[20] ,char sname[20], char scapital[20], char cm[20]):country(name, capital, pm)
			{
				strcpy(this->name, sname);
				strcpy(this->capital, scapital);
				strcpy(this->cm, cm);	
			}
			
			state (state &S):country(S)
			{
				strcpy(name,S.name);
				strcpy(capital,S.capital);
				strcpy(cm,S.cm);
		
			}	
			~state()
			{
				cout<<"Destructor state\n";
			}	
		
};

class district : state
{
	private:
		char name[20];
		
	public:
		void getdistrict(){
			getstate();
			cout<<"Enter District  : "<<endl;
			cin>>name;
			
		}	
		
		void showdistrict(){
			showstate();
			cout<<"District name : "<<name<<endl;
			
		}
		
		district()
		{
			name[0]='\0';
		}
		district(char name[20], char capital[20], char pm[20],char sname[20],char scapital[20], char cm[20], char dname[20]):state(name, capital, pm,sname, scapital, cm)
		{
			strcpy(this->name, dname);
		}
		
		district (district &D):state(D)
		{
			strcpy(name, D.name);
			
		}
		~district()
		{
			cout<<"Destructor district\n ";
		}
		
};







int main()
{
  
 district D1;
 /* D1.getdistrict();
  D1.showdistrict();
  
  district D2("India", "Delhi", "NarendraModi", "Rajasthan", "Jaipur", "VasundraRaje", "Bikaner" );
  D2.showdistrict();
  
  district D3(D1);
  D3.showdistrict();*/
  
  
    return 0;
}

