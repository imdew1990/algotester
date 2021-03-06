﻿#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long n, count = 0;
	cin >> n;

	while (n > 1)
	{
		if (n == 8 || n == 36)n -= 7;
		else
			if (n % 4 == 0)n /= 4;
			else n -= 7;
		count++;
	}
	if (n == 1) { cout << count; }
	else cout << -1;
	system("pause");
}

