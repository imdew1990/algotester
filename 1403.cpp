#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<int>a(n);
	for (int i = 0; i < a.size(); i++)
	{
		cin >> a[i];
	}
	int min;
	cin >> min;
	sort(a.begin(), a.end());
	while (accumulate(a.begin() + 1, a.end(), 0) >= min)
		a.erase(a.begin());
	double summa = accumulate(a.begin(), a.end(), 0);
	summa /= a.size();
	cout << summa;
	system("pause");
}
