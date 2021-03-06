#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, m, min = 10001, max = 0;
	cin >> n >> m;
	vector< vector<int> >a;
	a.assign(n, vector<int>(m));
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			cin >> a[i][j];
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (a[j][i] > max)max = a[j][i];
		}
		if (max < min)min = max;
		max = 0;
	}
	cout << min;

	system("pause");
}
