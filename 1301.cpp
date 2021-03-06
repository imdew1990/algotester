#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<int>a;
	for (int i = 0; i < n; i++)
	{
		int k; cin >> k; a.push_back(k);
	}
	for (int i = 0; i < a.size(); i++)
	{
		if (a[i] > 0) { cout << i + 1 << " "; }
	}
	system("pause");
}