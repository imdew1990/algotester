#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,count=0;
	cin >> n;
	vector<pair<string, int>>a(n);
	for (auto it = a.begin(); it != a.end(); it++)
		cin >> it->first >> it->second;
	sort(a.begin(), a.end());
	a.push_back(make_pair("", 0));
	for (int i = 1; i < a.size(); i++)
	{
		if (a[i].first != a[i - 1].first)
			count += a[i-1].second;
	}
	cout << count;
}
