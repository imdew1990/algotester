#include <bits/stdc++.h>
using namespace std;
bool perevirka(int n)
{
	if (n % 2 == 0)return true;
	else return false;
}
int main()
{
	int n, count = 0;
	cin >> n;
	vector<int>a(n);
	for (int i = 0; i < a.size(); i++)
	{
		cin >> a[i];
	}
	for (int i = 0; i < a.size() - 1; i++)
	{
		if (perevirka(a[i]) != perevirka(a[i + 1])) { count++; }

	}
	cout << count;
	system("pause");
}
