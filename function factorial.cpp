#include<iostream>

using namespace std;


int factorial(int num) 
{
    
    int fact = 1;

    for (int i=num; i>=1; i--) 
        fact *=i;

    return fact;
}

int main()
{
    int num;

    cout << "Enter the Number :";
    cin>>num;

    
    cout << num << " Factorial Value Is " << factorial(num);

    return 0;
}


