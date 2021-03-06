﻿#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void vivod(vector<int> begin, vector<int> end)
{
	for (int i = 0; i < end.size(); i++)
	{
		cout << begin[i] << " " << end[i] << endl;
	}
	cout << endl;
}
int main()
{
	int n, res = 43200;
	cin >> n;
	vector<int> begin, end;
	for (int i = 0; i < n; i++)
	{
		int h1, m1, s1, h2, m2, s2;
		cin >> h1 >> m1 >> s1 >> h2 >> m2 >> s2;
		//	h1 -= 8; h2 -= 8;
		h1 *= 3600;
		m1 *= 60;
		begin.push_back(h1 + m1 + s1);
		h2 *= 3600;
		m2 *= 60;
		end.push_back(h2 + m2 + s2);
	}
	sort(begin.begin(), begin.end());
	sort(end.begin(), end.end());
	begin.push_back(end[end.size() - 1] + 1);
	int i = 0;
	//vivod(begin, end);
	while (i < end.size())
	{
		//if (i == begin.size() - 1) { res += end[i] - begin[i]; }
	por:
		if (end[i] >= begin[i + 1])
		{
			end.erase(end.begin() + i);
			begin.erase(begin.begin() + i + 1);
			goto por;
		}
		//vivod(begin, end);
		res -= end[i] - begin[i];
		begin.erase(begin.begin() + i);
		end.erase(end.begin() + i);
	}
	cout << res;
	system("pause");
}




