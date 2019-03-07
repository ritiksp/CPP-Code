#include <iostream>

using namespace std;

int prime(int num)
{
	
  for(int i=2;i<=num/2;i++)
  {
      if(num%i==0)
          return 0;
  }
    return 1;  
}

void isPrime(int num)
{
	int i;
  for( i=2;i<=num/2;i++)
  {
      if(num%i==0)
          break;
  }

  if(i>num/2)
    cout <<num<< " is a prime number.";
  else
    cout <<num<< " is not a prime number.";
}

int main()
{
  int num;

  cout << "Enter a integer: ";
  cin >> num;
  
  if(prime(num))
    cout <<num<< " is a prime number.";
  else
    cout <<num<< " is not a prime number.";
    
    
    isPrime(num);
  return 0;
}

