#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	char data[100];
	
	ofstream outfile;
	outfile.open("MyData.txt");
	
	cout<<"Write your text here"<<endl;
	
	cin>>data;
	
	outfile<<data<<endl;
	
	outfile.close();
	
	ifstream infile;
	infile.open("MyData.txt");
	cout<<"File U have Writtern is"<<endl;
	infile>>data;
	cout<<data<<endl;
	
	return 0;
}
