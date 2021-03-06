#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int logt;

int main()
{
	int n;
	cin >> n;
	vector<int>max;
	for (int i = 0; i < n; i++)
	{
		int k;
		cin >> k;
		max.push_back(k);
	}
	sort(max.begin(), max.end());
	cout << max[max.size() - 1];
	system("pause");
}