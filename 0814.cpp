#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long n, kil;
	kil = 11;
	cin >> n;
	double min = n / 60;
	if (n % 60 != 0) { min++; }
	long long p = 0;
	while (p < 7 && min >= 1)
	{
		min--;
		p++;
		kil += 9;
	}
	while (min >= 1)
	{
		min--;
		kil += 5;
	}
	cout << kil;
	system("pause");
}