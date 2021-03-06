#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long int ulli;
int howmanyfive(int n)
{
	int i = 0;
	while (n % 5 == 0)
	{
		i++;
		n /= 5;
	}
	return i;
}
int main()
{
	ulli n, count = 0, k = 5, it = 0;
	cin >> n;
	if (n < 5) { count = 0; }
	else
	{
		while (k <= n)
		{

			if (it == 4) {
				count += howmanyfive(k);
				it = 0;
			}
			else { it++; count++; }

			k += 5;
		}
	}


	cout << count;
	system("pause");

}

