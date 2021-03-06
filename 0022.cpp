#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int logt;
long gcd(long a, long b) {
	while (a != 0 && b != 0)
	{
		if (a > b) a %= b;
		else b %= a;
	}
	return(a + b);
}


int main()
{

	long long n, nsd, i, kil = 0;
	cin >> n;
	vector<long long> a(n + 1);
	for (i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	if (n == 1) { cout << 1; }
	else
	{
		nsd = gcd(a[0], a[1]);
		for (i = 2; i < n; i++)
		{
			nsd = gcd(nsd, a[i]);
		}
		for (i = 0; i < n; i++)
		{
			kil += a[i] / nsd;
		}
		cout << kil;
	}

	system("pause");
}



