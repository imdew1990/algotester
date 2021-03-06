﻿#include <bits/stdc++.h>
using namespace std;
# define M_PI 3.141592653589793238462643383279502884L /* pi */
int main()
{
	int r, h;
	cin >> r >> h;
	cout << fixed << setprecision(7) << M_PI * r * r * (h - (2 * r)) + (4 * M_PI * r * r * r) / 3 << " ";
	cout << fixed << setprecision(7) << 2 * M_PI * r * (h - (2 * r)) + 4 * M_PI * r * r;
	system("pause");
}
