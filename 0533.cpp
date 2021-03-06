#include <bits/stdc++.h>
using namespace std;
string olo(string s)
{
	string k;

	return k;
}
int main()
{
	string s, k;
	cin >> s;
	while (s.size() > 0)
	{
		k.push_back(s.front());
		s.erase(s.begin());
		if (s.size() > 1)
		{
			k.push_back(s.back());
			s.erase(s.size() - 1);
		}
	}
	cout << k << endl;
	system("pause");
}
