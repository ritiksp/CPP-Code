#include<iostream>
#include<cstring>
#define n 2

using namespace std;

int main()
{	
	struct student
	{
		int roll;
		char name[50];
		float marks[3];
		float total;
		float per;
		char status[10];
	};

		
	student E[n];  
  
  for(int i=0;i<n;i++)
	{
	 	cout << "Enter Roll no., name, marks of "<<i+1<<" Student "<< endl;
    	cin >> E[i].roll;
    	cin>>E[i].name;
    	/*cout<<"Maths marks out of 100 : ";
    	cin >> E[i].marks[0];
    	cout<<"Physics marks out of 100 : ";
    	cin >> E[i].marks[1];
    	cout<<"C++ marks out of 100 : ";
    	cin >> E[i].marks[2];
	*/
		for(int j=0;j<3;j++)
		{
			cout<<"Enter marks for "<<j+1<<" student ::";
			cin>>E[i].marks[j];
			E[i].total+=E[i].marks[j];
		}
		
		E[i].per=E[i].total/3;
		if(E[i].per>=40)
			strcpy(E[i].status,"pass");
		else
			strcpy(E[i].status,"fail");
	}

	for(int i=0;i<n;i++)
	{
		cout<<"Percentage of "<<E[i].name<<" is "<<E[i].per<<"%"<<endl;
		cout<<"U r "<<E[i].status<<endl;		
	}
	
	int max=E[0].per;
	int Tpos=0;	
	for(int j=1;j<n;j++)
	{
		if(max<E[j].per)
		{
			Tpos=j;
			max=E[j].per;
		}
	}
	
	cout<<E[Tpos].name<<" is topper & percentage is  "<<max<<endl;
    
	
	int fail=0;
    
	for(int i=0;i<n;i++)
	{
		if(E[i].per<40)
			fail++;
	}
	
	cout<<"No of student fails are"<<fail;
 return 0;}
