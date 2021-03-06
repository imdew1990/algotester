#include <bits/stdc++.h>
using namespace std;

int main()
{
	string x;
	bool key = true;
	int n;
	cin >> n;
	cin >> x;
	vector<string>k(n);
	for (auto it = k.begin(); it != k.end(); it++)
	{
		cin >> *it;
		if (*it != x) { key = false; }
	}
	if (key)
	{
		cout << "YES";
	}
	else
	{
		cout << "NO";
	}
}
