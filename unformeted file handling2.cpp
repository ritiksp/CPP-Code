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
	
	char ch;
	ofstream fout("dupswitchcase.cpp");
		
	while(!fin.eof())
	{
		ch=fin.get();
		fout<<ch;
	}
	
	fin.close();
	fout.close();	

	

	
	return 0;	
}



