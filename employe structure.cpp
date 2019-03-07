#include <iostream>
using namespace std;
#define n 3
struct employe
{	char employeid[50];
    char name[50];
    double salary;
    char grade;
};

int main() 
{
    employe e1;
    cout << "Enter information," << endl;
    cout << "Enter employe id: ";
    cin >> e1.employeid;
    cout<<"Enter name of employe : ";
    cin>>e1.name;
    cout << "Enter salary: ";
    cin >> e1.salary;
  
    if(e1.salary>0 && e1.salary<=5000)
    	e1.grade='C';
    else 
    {
    	if(e1.salary>5000 && e1.salary<=10000)
    		e1.grade='B';
    	else 
		{
			if(e1.salary>10000 && e1.salary<=15000)
				e1.grade='A';
    		else
			{
				if(e1.salary>15000)
					e1.grade='O';
    			else
					cout<<"Invalid";
			}
		}
	}
if(e1.salary>0)
	cout<<"Grade of "<<e1.name<<"is "<<e1.grade<<endl;
			
employe E[n];  
  
  for(int i=0;i<n;i++)
	{
	 	cout << "Enter employe id, name and Salary of " <<i+1<<"Employee "<< endl;
    	cin >> E[i].employeid;
    	cin>>E[i].name;
    	cin >> E[i].salary;
  
  
    if(E[i].salary>0 && E[i].salary<=5000)
    	E[i].grade='C';
    else 
       	if(E[i].salary>5000 && E[i].salary<=10000)
    		E[i].grade='B';
    	else 
			if(E[i].salary>10000 && E[i].salary<=15000)
				E[i].grade='A';
    		else
				if(E[i].salary>15000)
					E[i].grade='O';
    			else
					E[i].grade='I';
    	
	} 
    /*
    employe e2;
    cout << "Enter information," << endl;
    cout << "Enter employe id: ";
    cin >> e2.employeid;
    cout<<"Enter name of employe :";
    cin>>e2.name;
    cout << "Enter salary: ";
    cin >> e2.salary;
    
    employe e3;
    cout << "Enter information," << endl;
    cout << "Enter employe id: ";
    cin >> e3.employeid;
    cout<<"Enter name of employe : ";
    cin>>e3.name;
    cout << "Enter salary: ";
    cin >> e3.salary;
    
    employe e4;
    cout << "Enter information," << endl;
    cout << "Enter employe id: ";
    cin >> e4.employeid;
    cout<<"Enter name of employe";
    cin>>e4.name;
    cout << "Enter salary: ";
    cin >> e4.salary;
    
    employe e5;
    cout << "Enter information," << endl;
    cout << "Enter employe id: ";
    cin >> e5.employeid;
    cout<<"Enter name of employe : ";
    cin>>e5.name;
    cout << "Enter salary: ";
    cin >> e5.salary;
    
    
	
  	
	if(e2.salary>0 && e2.salary<=5000)
    cout<<"Grade of "<<e2.name<<"is C"<<endl;
    else 
    {
    	if(e2.salary>5000 && e2.salary<=10000)
    	{
    		cout<<"Grade of "<<e2.name<<" is B"<<endl;
		}
		else 
		{
			if(e2.salary>10000 && e2.salary<=15000)
			{
				cout<<"Grade of "<<e2.name<<" is A"<<endl;	
			}
			else
			{
				if(e2.salary>15000)
				{
					cout<<"Grade of "<<e2.name<<" is O"<<endl;
				}
				else
				cout<<"Invalid";
			}
		}
	}
	
	if(e3.salary>0 && e3.salary<=5000)
    cout<<"Grade of "<<e3.name<<" is C"<<endl;
    else 
    {
    	if(e3.salary>5000 && e3.salary<=10000)
    	{
    		cout<<"Grade of "<<e3.name<<" is B"<<endl;
		}
		else 
		{
			if(e3.salary>10000 && e3.salary<=15000)
			{
				cout<<"Grade of "<<e3.name<<" is A"<<endl;	
			}
			else
			{
				if(e3.salary>15000)
				{
					cout<<"Grade of "<<e3.name<<" is O"<<endl;
				}
				else
				cout<<"Invalid";
			}
		}
	}
	
	if(e4.salary>0 && e4.salary<=5000)
    cout<<"Grade of "<<e4.name<<" is C"<<endl;
    else 
    {
    	if(e4.salary>5000 && e4.salary<=10000)
    	{
    		cout<<"Grade of "<<e4.name<<" is B"<<endl;
		}
		else 
		{
			if(e4.salary>10000 && e4.salary<=15000)
			{
				cout<<"Grade of "<<e4.name<<" is A"<<endl;	
			}
			else
			{
				if(e4.salary>15000)
				{
					cout<<"Grade of "<<e4.name<<" is O"<<endl;
				}
				else
				cout<<"Invalid";
			}
		}
	}
	
	if(e5.salary>0 && e5.salary<=5000)
    cout<<"Grade of "<<e5.name<<" is C"<<endl;
    else 
    {
    	if(e5.salary>5000 && e5.salary<=10000)
    	{
    		cout<<"Grade of "<<e5.name<<" is B"<<endl;
		}
		else 
		{
			if(e5.salary>10000 && e5.salary<=15000)
			{
				cout<<"Grade of "<<e5.name<<" is A"<<endl;	
			}
			else
			{
				if(e5.salary>15000)
				{
					cout<<"Grade of "<<e5.name<<" is O"<<endl;
				}
				else
				cout<<"Invalid";
			}
		}
	}
*/
 
	return 0;
}

