#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <cmath>
using namespace std;
bool prost(long long x) {
	for (long long i = 2; i <= sqrt(x); i++)
		if (x % i == 0)
			return false;
	return true;
}
long long nsd(long long a, long long b)
{
	if (b == 0)return a;
	return nsd(b, a % b);
}
long long nsk(long long a, long long b)
{
	return a / nsd(a, b) * b;
}
int log(long long n)
{
	long long kil = 1, i = 2;
	while (i <= n)
	{
		long long t = 0;
		while (n % i == 0)
		{
			t++;
			n /= i;
		}
		kil *= t + 1;
		i++;
	}
	if (kil != 1) { kil *= 2; }
	return kil;
}
int main(int ac, char* av[])
{
	long long X; long long i, j, k = 1, g;
	cin >> X;
	if (prost(X)) { cout << "3"; return 0; }
	cout << log(X * X) / 2;
	system("pause");
	return 0;
}