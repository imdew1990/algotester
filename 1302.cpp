#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s, min, max;
	cin >> s;
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] != '*') { min.push_back(s[i]); max.push_back(s[i]); }
		else
			if (s[i] == '*' && i == 0) { min.push_back('1'); max.push_back('9'); }
			else
			{
				min.push_back('0'); max.push_back('9');
			}
	}
	cout << min << " " << max;
	system("pause");
}

