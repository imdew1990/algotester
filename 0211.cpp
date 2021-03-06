#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;
	set<string>a;
	for (int i = 0; i < n + m; i++)
	{
		string s;
		cin >> s;
		a.insert(s);
	}


	cout << a.size();
	system("pause");
}
