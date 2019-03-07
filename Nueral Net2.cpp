#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
	int t;
	cin>>t;
	while(t--){
		int N, minx, maxx, sum, x, y, ns = 0, s =0, i, j;
		cin>>N>>minx>>maxx;
		vector<int> w, b;
		for (i=0; i<N; i++){
			cin>>x>>y;
			w.push_back(x);
			b.push_back(y);
		}
		int even = 2, odd = 1;
		for (j=0; j<N; j++){
			even = (w[j]*even)+b[j];
			odd = (w[j]*odd)+b[j];
		}
		if(even%2 == 0){
			if (odd%2 == 0){
				cout<<maxx-minx+1<<" "<<0<<endl;
			}
			else{
				ns = (maxx-minx)/2;
				if (minx%2 == 0){
					ns++;
				}
				cout<<ns<<" "<<maxx-minx+1-ns<<endl;
			}
		}
		else{
			if (odd%2 == 0){
				s = (maxx-minx+1)/2;
				if (minx%2 == 0){
					s++;
				}
				cout<<maxx-minx+1-s<<" "<<s<<endl;
			}
			else{
				cout<<0<<" "<<maxx-minx+1<<endl;
			}
		}
	}
	return 0;
} 
