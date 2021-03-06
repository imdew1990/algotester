#include <iostream>
#include <algorithm>
#include <vector>
#include <math.h>
using namespace std;

int main()
{
	long n = 0, i, sum = 0, sra = 0, srb = 0, src = 0, ls;

	cin >> n;
	vector<long> a(n);
	vector<long> b(n);
	vector<long> c(n);
	for (i = 0; i < n; i++)
	{
		cin >> a[i] >> b[i] >> c[i];
	}

	sort(a.begin(), a.end());
	sort(b.begin(), b.end());
	sort(c.begin(), c.end());
	ls = floor(n / 2);
	sra = a[ls];
	srb = b[ls];
	src = c[ls];


	for (i = 0; i < n; i++)
	{
		sum += abs(a[i] - sra) + abs(b[i] - srb) + abs(c[i] - src);
	}
	cout << sum;
	system("pause");
	return 0;

}

