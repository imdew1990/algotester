﻿#include <bits/stdc++.h>
using namespace std;
# define M_PI           3.14159265358979323846
int main()
{
	int n;
	long double m, k;
	cin >> n;
	vector<string>a;
	for (int i = 0; i < n; i++)
	{
		cin >> m >> k;
		k = k * (1 + 2 / sqrt(3));
		if (m > k) { a.push_back("Dry"); }
		else a.push_back("Wet");
	}
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << endl;
	}
	system("pause");
}
