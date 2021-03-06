#include <bits/stdc++.h>
using namespace std;
int vidstan(int x, int y, int maxx, int maxy)
{
	int sqrtx = abs(maxx - x);
	int sqrty = abs(maxy - y);
	return sqrtx + sqrty;
}
int main() {

	long long int n, maxx = -1, maxy = -1, sum = 0;
	cin >> n;
	vector<int>x, y;
	for (int i = 0; i < n; i++)
	{
		int x1, y1;
		cin >> x1 >> y1;
		if (x1 > maxx) maxx = x1;
		if (y1 > maxy) maxy = y1;
		x.push_back(x1);
		y.push_back(y1);
	}
	for (int i = 0; i < x.size(); i++)
	{
		sum += vidstan(x[i], y[i], maxx, maxy);
	}
	cout << sum;
	system("pause");
}