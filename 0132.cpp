#include <string>
#include <iostream>
using namespace std;

int main()
{
	string t, s;
	cin >> t >> s;
	bool out = false;

	for (int i = 0; i < t.size(); i++)
	{
		if (t[i] != '?' && t[i] != s[0]) continue;
		bool sovpad = true;
		for (int j = 1, koef = i + 1; j < s.size(); j++, koef++)
		{
			if (koef != t.length() && (t[koef] == s[j] || t[koef] == '?')) continue;
			sovpad = false;	
			break;
		}
		if (!sovpad) continue;
		out = true;
		break;
	}


	if (out)cout << "YES";
	else cout << "NO";
}
