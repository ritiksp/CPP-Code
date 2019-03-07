#include <iostream>
#include<fstream>

using namespace std;

int main() 
{
	
	ifstream fin("switch case.cpp");
	if(!fin)
	{
		cerr<<"file not exist \n";
		exit(-1);
	}
	
	char str[100];
	ofstream fout("dupswitchcase.cpp");
		
	while(!fin.eof())
	{
		fin.getline(str,100);
		fout<<str<<endl;
	}
	
	fin.close();
	fout.close();	

	

	
	return 0;	
}



