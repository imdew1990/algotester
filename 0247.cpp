#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long n, s, sum = 0;
	cin >> n >> s;
	vector<long long> a(n), b(n);
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	for (int i = 0; i < n; i++)
	{
		cin >> b[i];
	}
	for (int i = 0; i < n; i++)
	{
		sum += abs(b[i] - a[i]);
	}
	s = s - sum;
	if (s < 0) { sum = 0; }
	cout << s;
	//system("pause");
}
