#include <iostream>
#include<fstream>

using namespace std;

int main() 
{
	
	//ofstream fout("resume.txt");
	fstream fout;
	fout.open("resume.txt", ios::app);
		
	fout<<"Name - Ritik Singh Panwar \n";
	fout<<"Age - 18\n";
	fout<<"B.tech 1st year \n\n\n";
	
	fout.close();
		
	return 0;	
}



