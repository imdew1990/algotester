#include <bits/stdc++.h>
using namespace std;
int rahuecost(string s, vector<char>b, vector<int>a)
{
	int costar = 0;
	int i, j;
	for (i = 0; i < s.size(); i++)
	{
		for (j = 0; j < b.size(); j++)
		{
			if (s[i] == b[j]) { break; }
		}
		costar += a[j];
	}
	return costar;
}
int main()
{
	int m, n, k, costp, max = -1;
	string maxstring;
	cin >> m >> n >> k;
	vector<int> cost;
	vector<char>arp;
	vector<string>lop, ker;
	for (int i = 0; i < m; i++)
	{
		int o;
		char p;
		cin >> p >> o;
		arp.push_back(p);
		cost.push_back(o);
	}
	for (int i = 0; i < n; i++)
	{

		string p;
		cin >> p;
		lop.push_back(p);
		costp = rahuecost(p, arp, cost);
		if (costp > max && costp < k) { max = costp; maxstring = p; }
	}
	sort(lop.begin(), lop.end());
	vector<string>lop1 = lop;
	/*for (int i = 0; i < n; i++)
	{
		cout << lop1[i]<< ' ' << rahuecost(lop[i], arp, cost)<<endl;
	}*/
	for (int i = 0; i < n; i++)
	{

		costp = rahuecost(lop1[i], arp, cost);
		if (costp > max && costp <= k) { max = costp; }
	}
	for (int i = 0; i < n; i++)
	{
		if (rahuecost(lop1[i], arp, cost) == max)
		{
			ker.push_back(lop1[i]);
		}
	}
	sort(ker.begin(), ker.end());
	cout << ker[0];
	system("pause");
}
