#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n; 
	cin >> n;
	vector<double>a(n),b;
	for (int i = 0; i < a.size(); i++)
		cin >> a[i];
	sort(a.begin(), a.end());
	a.push_back(a[0]);
	for (int i = 1; i < a.size(); i++)
	{
		if(a[i] - a[i - 1]<0) b.push_back(360+(a[i] - a[i - 1]));
		else
		b.push_back(a[i] - a[i - 1]);
	}
	sort(b.begin(), b.end());
	double d;
	if (b[b.size() - 1] / 2 < b[b.size() - 2])d = b[b.size() - 2];
	else d = b[b.size() - 1] / 2;
	cout << fixed << setprecision(1) << d;
}
