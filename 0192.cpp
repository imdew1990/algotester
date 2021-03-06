﻿#include <iostream>
#include <string>
#include <vector>
#include <set>
using namespace std;
typedef long double ld;
typedef long long int uli;

void vivod(vector<int> begin, vector<int> end)
{
	for (uli i = 0; i < end.size(); i++)
	{
		cout << begin[i] << " " << end[i] << endl;
	}
	cout << endl;
}
/*
	L=x-1 y
	R=x+1 y
	D=x y-1
	U= x y+1
*/
int main()
{
	vector<uli> x(1), y(1);
	vector<string>strichka;
	cin >> x[0] >> y[0];
	set<string>res;
	string s;
	uli l = 1;
	cin >> s;
	for (auto i = 0; i < s.size(); i++)
	{

		if (s[i] == 'L') { x.push_back(x[l - 1] - 1); y.push_back(y[l - 1]); }
		if (s[i] == 'R') { x.push_back(x[l - 1] + 1); y.push_back(y[l - 1]); }
		if (s[i] == 'D') { x.push_back(x[l - 1]); y.push_back(y[l - 1] - 1); }
		if (s[i] == 'U') { x.push_back(x[l - 1]); y.push_back(y[l - 1] + 1); }
		l++;
	}
	for (auto i = 0; i < x.size(); i++)
	{
		string k;
		while (x[i] != 0) {
			k += x[i] % 10 + '0';
			x[i] /= 10;
		}
		k += " ";
		while (y[i] != 0)
		{
			k += y[i] % 10 + '0';
			y[i] /= 10;
		}
		strichka.push_back(k);
	}
	uli key = 0;
	for (auto i = 0; i < strichka.size(); i++)
	{
		uli k = res.size();
		res.insert(strichka[i]);
		if (k == res.size()) { key = i; break; }
	}
	if (key == 0) { cout << "Success"; }
	else { cout << "Fail" << endl << key; }
}

