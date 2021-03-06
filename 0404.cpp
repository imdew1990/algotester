#include <bits/stdc++.h>
using namespace std;
int find_pos(vector<pair<char, int>>a, char s)
{
	for (int i = 0; i < a.size(); i++)
		if (a[i].first == s) { return i; }
	return -1;
}
int main()
{
	string s;
	set<char>ahrgrj;
	cin >> s;
	for (int i = 0; i < s.size(); i++)
		ahrgrj.insert(s[i]);
	vector<pair<char, int>>b(ahrgrj.size());
	vector<pair<char, int>>c(ahrgrj.size());
	int p = 0;
	for (auto i = ahrgrj.begin(); i != ahrgrj.end(); i++)
	{
		b[p] = make_pair(*i, 0); c[p] = make_pair(*i, 0); p++;
	}
	for (int i = 0; i < s.size(); i++)
		b[find_pos(b, s[i])].second++;
	int n;
	cin >> n;
	while (n > 0)
	{
		string k;
		cin >> k;
		for (int i = 0; i < k.size(); i++) {
			if (find_pos(c, k[i]) == -1)continue;
			c[find_pos(c, k[i])].second++;
		}
		n--;
	}
	int INF = 10000000 + 7;
	int count = INF;
	for (int i = 0; i < b.size(); i++)
	{
		if (c[i].second < b[i].second) { cout << 0; return 0; }
		if (count > c[i].second / b[i].second) count = c[i].second / b[i].second;
	}
	cout << count;
}

