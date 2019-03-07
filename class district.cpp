#include <iostream>
#include<string>
#include<cstring>


using namespace std;

class district
{
	private:
		char name[20];
		
	public:
		void getdistrict(){
			cout<<"Enter District  : "<<endl;
			cin>>name;
			
		}	
		
		void showdistrict(){
			cout<<"District name : "<<name<<endl;
			
		}
		
		distric()
		{
			name[0]='\0';
		}
		district(char name[20])
		{
			strcpy(this->name, name);
		}
		
		district (district &D)
		{
			strcpy(name, D.name);
			
		}
		
};

int main()
{
  	district D1;
	  
	  D1.getdistrict();
	  D1.showdistrict();
	  
	  
	  ///district D2("Nokha");
	  //D2.showdistrict();;
	  
	  district D3(D1);
	  D3.showdistric();
	  
    return 0;
}

