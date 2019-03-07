#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
    const int N = 1000000;
    const int SQR_ROOT_N = (int) (sqrt ((double) N));
    bool prime[N + 1];
    prime[0] = false;  // 0 is not prime
    prime[1] = false;  // 1 is not prime
    for (int i = 2; i <= N; i++)
         prime[i] = true;  // flag all numbers as prime initially
    for (int i = 2; i <= SQR_ROOT_N; i++)
    {
        if (prime[i]) // no need for inner loop if i is not prime
        {
            for (int j = 2 * i; j <= N; j+=i)
                 prime[j] = false;  // j is a multiple of i, thus not prime.
        }
    }
    // display prime numbers
    cout << "Here are the prime numbers\n\n";
    for (int i = 2; i <= N; i++)
    {
        if (prime[i])
            cout << i << endl;
    }
    return 0;
}
