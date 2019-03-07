#include <iostream>
using namespace std;

#define llu unsigned long long
#define MOD 1000000009

llu mulmod(llu a,llu b) // This function calculates (a*b)%MOD caring about overflows
{
    llu x=0,y=a%MOD;
    while(b > 0)
    {
        if(b%2 == 1)
        {
            x = (x+y)%MOD;
        }
        y = (y*2)%MOD;
        b /= 2;
    }
    return (x%MOD);
}

llu fun(int n)   // This function returns answer to my query ie. n!%MOD
{
    llu ans=1;
    for(int j=1; j<=n; j++)
    {
        ans=mulmod(ans,j);
    }
    return ans;
}
