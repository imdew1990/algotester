﻿#include <iostream>
using namespace std;

int main()
{
	int n, i = 1;
	cin >> n;
	while (true)
	{
		if (n <= i * 2) { break; }

		i *= 2;
	}
	cout << (n - i) * 2;
}
