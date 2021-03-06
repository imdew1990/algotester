#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, k, p;
	cin >> n >> k;
	vector<int> a(k);
	p = 0;


	while (n > 0)
	{
		if (a[p] <= 3)a[p]++;

		if (p == k - 1) { p = 0; }
		else p++;
		n--;
	}
	sort(a.begin(), a.end());
	if (a[k - 1] > 3 || a[0] == 0)cout << "Impossible";
	else
	{
		for (int i = 0; i < k; i++)
		{

			cout << a[i] << " ";
		}
	}

	system("pause");
}
