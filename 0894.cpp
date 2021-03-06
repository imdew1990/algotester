﻿#include <bits/stdc++.h>
using namespace std;
void vivod(vector<int>a)
{
	for (int i = 0; i < a.size(); i++)
	{
		cout << a[i] << ' ';
	}
	cout << endl;
}
int summa(vector<int>a)
{
	return accumulate(a.begin(), a.end(), 0);
}
int howpolindroms(string s)
{
	int n = s.size();
	vector<int> d1(n);
	int l = 0, r = -1;
	for (int i = 0; i < n; ++i) {
		int k = (i > r ? 0 : min(d1[l + r - i], r - i)) + 1;
		while (i + k < n && i - k >= 0 && s[i + k] == s[i - k])  ++k;
		d1[i] = k--;
		if (i + k > r)
			l = i - k, r = i + k;
	}
	vector<int> d2(n);
	l = 0, r = -1;
	for (int i = 0; i < n; ++i) {
		int k = (i > r ? 0 : min(d2[l + r - i + 1], r - i + 1)) + 1;
		while (i + k - 1 < n && i - k >= 0 && s[i + k - 1] == s[i - k])  ++k;
		d2[i] = --k;
		if (i + k - 1 > r)
			l = i - k, r = i + k - 1;
	}
	return summa(d1) + summa(d2);
}
string longestpolindrom(string s)
{
	int n = s.size();
	vector<int> d1(n);
	int l = 0, r = -1;
	for (int i = 0; i < n; ++i) {
		int k = (i > r ? 0 : min(d1[l + r - i], r - i)) + 1;
		while (i + k < n && i - k >= 0 && s[i + k] == s[i - k])  ++k;
		d1[i] = k--;
		if (i + k > r)
			l = i - k, r = i + k;
	}
	vector<int> d2(n);
	l = 0, r = -1;
	for (int i = 0; i < n; ++i) {
		int k = (i > r ? 0 : min(d2[l + r - i + 1], r - i + 1)) + 1;
		while (i + k - 1 < n && i - k >= 0 && s[i + k - 1] == s[i - k])  ++k;
		d2[i] = --k;
		if (i + k - 1 > r)
			l = i - k, r = i + k - 1;
	}
	int maxd1 = *max_element(d1.begin(), d1.end());
	int maxd2 = *max_element(d2.begin(), d2.end());
	string k;
	if (maxd1 > maxd2)
	{
		int length = distance(d1.begin(), max_element(d1.begin(), d1.end()));
		for (int i = length - maxd1 + 1; i <= length + maxd1 - 1; i++)
			k += s[i];
	}
	else
	{
		int length = distance(d2.begin(), max_element(d2.begin(), d2.end()));
		for (int i = length - maxd2; i <= length + maxd2 - 1; i++)
			k += s[i];
	}
	return k;
}
int main()
{
	int n;
	cin >> n;
	string s;
	cin >> s;
	string k = longestpolindrom(s);
	cout << k.size();
	system("pause");
}


