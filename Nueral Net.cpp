#include <iostream>
#include<fstream>
#include<stdio.h>
#include<bits/stdc++.h>

using namespace std;

int main()
{
	int T;
	cout<<"Enter Number of Test Cases"<<endl;
	cin>>T;
	int countTest=1;
	while(T--){	
	
	cout<<"Enter test case "<<countTest<<endl;
	int N, minX, maxX;
	countTest++;
	
	cout<<"Enter Number of layers you want"<<endl;
	cin>>N;
	
	cout<<"Enter minimum number range"<<endl;
	cin>>minX;
	
	cout<<"Enter minimum number range"<<endl;
	cin>>maxX;
	
	int x,y;
	vector<int> w, b;
		for (int i=0; i<N; i++){
			cout<<"Enter weight and bias respectively fot layer "<<i+1<<endl;
			cin>>x>>y;
			w.push_back(x);
			b.push_back(y);
		}
		int ns=0,s=0;
		int even = 2, odd = 1;
		for (int j=0; j<N; j++){
			even = (w[j]*even)+b[j];
			odd = (w[j]*odd)+b[j];
		}
		if(even%2 == 0){
			if (odd%2 == 0){
				cout<<"Non-Spammers="<<maxX-minX+1<<" "<<"Spammers"<<0<<endl;
			}
			else{
				ns = (maxX-minX)/2;
				if (minX%2 == 0){
					ns++;
				}
				cout<<"Non-Spammers"<<ns<<" "<<"Spammers"<<maxX-minX+1-ns<<endl;
			}
		}
		else{
			if (odd%2 == 0){
				s = (maxX-minX+1)/2;
				if (minX%2 == 0){
					s++;
				}
				cout<<"Non-Spammers"<<maxX-minX+1-s<<" "<<"Spammers"<<s<<endl;
			}
			else{
				cout<<"Non-Spammers"<<0<<" "<<"Spammers"<<maxX-minX+1<<endl;
			}
		}
	
	
}
	
	return 0;
}




