#include <bits/stdc++.h>
using namespace std;

int main()
{
	unsigned long long int  a, b, c, d, n, k, znam, j, i;
	cin >> a >> b >> c >> d;
	znam = (b - a + 1) * (d - c + 1);
	cin >> n;
	vector<unsigned long long int>dil;
	vector<unsigned long long int>number(n);
	for (i = 0; i < n; i++)
	{
		cin >> number[i];
	}
	for (i = 0; i < n; i++)
	{
		unsigned long long int p = 0, kil = 0, k = number[i];

		for (j = 1; j <= sqrt(k); j++)
		{
			if (k % j != 0) continue;
			dil.resize(p + 1);
			dil[p] = j;
			p++;
			if (j != k / j) {
				dil.resize(p + 1);
				dil[p] = k / j;
				p++;
			}
		}
		sort(dil.begin(), dil.end());
		for (j = 0; j < p; j++)
		{
			if (dil[j] <= b && dil[j] >= a)
			{
				if (k / dil[j] <= d && k / dil[j] >= c) { kil++; }
			}
		}
		cout << kil << '/' << znam << endl;
		dil.clear();
	}
	system("pause");
}

