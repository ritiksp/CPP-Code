#include<iostream>
using namespace std;

#include <cmath>
#include <iostream>

using namespace std;

int sum_primes(int N) 
{
cout << "Enter a number:\t ";
cin >> N;
int i, count = 0, sum = 0, x;
bool prime;

for(x = 2; x <= N; x++) {
prime = true;

for(i = 2; i <= sqrt(x); i++) {

if (x % i == 0) {
prime = false;
count++;
}
}
if (prime) sum += x;

 

}
if (count == 0 && N>3)
sum += N;

return sum;
}

int main(){
int Q;
cout << "Enter a number:\t ";
cin >> Q;
cout << "The sum of these primes is: " << sum_primes(Q);

return 0;

}
