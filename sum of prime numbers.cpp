#include <iostream>
using namespace std;

int prime(int n);

int main()
{
	int n;
	cout << "Enter nth Value: ";
	cin >> n;
	cout << "The Sum Is: " << prime(n);
	return prime(n);
}

int prime(int n)
{
	int num = 0;
	bool prime;
	for(int i = 2; i <= n; i++)
	{
		prime = true;
		for(int j = 2; j < i; j++)
		{
			if(i % j == 0)
			{
				prime = false;
				break;
			}
		}
		if(prime)
		{
			num += i;
		}
	}
	return num;
}
