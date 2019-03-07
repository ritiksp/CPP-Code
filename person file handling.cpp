#include <iostream>
#include<string>
#include<cstring>
#include<fstream>
#define n 3


using namespace std;

class person
{
	private:
		char name[20];
		int age;
		char address[20];
		static int count;
		
	public:
		void getperson(){
			cout<<"Enter name, age , address of person"<<endl;
			cin>>name;
			cin>>age;
			cin>>address;
			
		}	
		
		void showperson(){
			cout<<"person name is : "<<name<<endl;
			cout<<"Person age is : "<<age<<endl;
			cout<<"person address is : "<<address<<endl;
		}
		
		
		person()
			{
				name[0]='\0';
				age=0;
				address[0]='\0';
				count++;
			}
			
			person(char name[], int age, char address[])
			{
				strcpy(this->name, name);
				this->age=age;
				strcpy(this->address, address);
				count++;
			}
			
			person(person &P)
			{
				strcpy(name,P.name);
				age=P.age;;
				strcpy(address,P.address);
				count++;
			}
			
			static void display()
{
	cout<<"No. of person are : "<<count;
}
};

int person::count=0;
void saveRec(person P)
{
	fstream fout;
	fout.open("person.dat", ios::app | ios::binary);
	fout.write((char*)&P, sizeof(person));
	fout.close();
}

person retrieveRec()
{
	fstream fin;
	fin.open("person.dat", ios::in | ios::binary);
	person T;
	fin.read((char*)&T, sizeof(person));
	fin.close();
	return T;
	
}

void saveRec(person P[])
{
	fstream fout;
	fout.open("person.dat", ios::app | ios::binary);
	fout.write((char*)P, sizeof(person)*n);
	fout.close();
}

person retrieveRec(person Q[], int records)
{
	fstream fin;
	fin.open("person.dat", ios::in | ios::binary);
	fin.read((char*)Q, sizeof(person)*records);
	fin.close();

}

int no_of_records()
{
	fstream fin;
	fin.open("person.dat", ios::in | ios::binary);
	fin.seekg(0,ios::end);
	return fin.tellg()/sizeof(person);
}


person retrieveRec(int pos)
{
	person T;
	if(pos>no_of_records())
	{
		
		cout<<"invalid";
		return T;
	}
	fstream fin;
	fin.open("person.dat", ios::in | ios::binary);
	
	fin.seekg((pos-1)*sizeof(person),ios::beg);
	fin.read((char*)&T, sizeof(person));
	fin.close();
	return T;
	
}




int main()
{
	person P1;
	P1.getperson();
	
	person P2("ritik", 18,"sardul");
	
	person P3(P1);
	
	person::display();
	
	
  	/*
  	person P1;
  	P1.getperson();
  	saveRec(P1);
  	
  	person P2;
  	P2.getperson();
  	saveRec(P2);
  	
  	person P3;
  	P3=retrieveRec();
  	P3.showperson();
	  
	  person P[n];
	  for(int i=0; i<n;i++)
	  {
	  	P[i].getperson();
	  }
	  
	  saveRec(P);
	  
	  person Q[n];
	  
	  retrieveRec(Q, n);
	  for(int i=0;i<n;i++)
	  {
	  	Q[i].showperson();
	  }

	  
	  person X;
	  X=retrieveRec(5);//nth  records
	  
	  X.showperson();
	  
	  cout<<"No of records are : "<<no_of_records();
	*/  
	  
	   
    return 0;
}

