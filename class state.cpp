#include <iostream>
#include<string>
#include<cstring>

using namespace std;

class state
{
	private:
		char name[20], capital[20], cm[20];
		
	public:
		void getstate(){
			cout<<"Enter State Name, Capital & Chief Minister  : "<<endl;
			cin>>name;
			cin>>capital;
			cin>>cm;
			
		}	
		
		void showstate(){
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
		state(char name[20], char capital[20], char cm[20])
			{
				strcpy(this->name, name);
				strcpy(this->capital, capital);
				strcpy(this->cm, cm);	
			}
			
			state (state &S)
			{
				strcpy(name,S.name);
				strcpy(capital,S.capital);
				strcpy(cm,S.cm);
		
			}		
		
};

int main()
{
  	  state S1;
	  
	  S1.getstate();
	  S1.showstate();
	  
		
	  
	  //state S2("rajasthan", "jaipur", "vsundra raje");
	  
	  //S2.showstate();
	  
	  state S3(S1);
	  S3.showstate();
	  
    return 0;
}

