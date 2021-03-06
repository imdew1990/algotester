#include <bits/stdc++.h>
using namespace std;

int main()
{
	long n, i, l;
	cin >> n;
	vector<long>a;
	vector<long> minus;
	vector<long> zero;
	vector<long> plus;
	for (long i = 0; i < n; i++)
	{
		int k; cin >> k;
		a.push_back(k);
	}
	sort(a.begin(), a.end());
	vector<long>b = a;
	i = 0;
	while (a.size() > 0)
	{
		l = a[i];
		if (a[i] < 0) { a.erase(a.begin()); minus.push_back(l); }
		else
			if (a[i] == 0) { a.erase(a.begin()); zero.push_back(l); }
			else
				if (a[i] > 0) { a.erase(a.begin()); plus.push_back(l); }
	}

	if (zero.size() == 0 && minus.size() == 0) { cout << plus.front(); }
	else if (zero.size() > 1 && minus.size() == 0) { cout << zero.front(); }
	else if (zero.size() == 0)
	{
		if (minus.size() % 2 == 0) { if (zero.size() == 0 && plus.size() == 0) { cout << minus.front(); } else { cout << plus.front(); } }
		else cout << minus.back();
	}
	else
		if (zero.size() == 1)
		{
			if (minus.size() % 2 == 0) { cout << zero.front(); }
			else cout << minus.front();
		}
		else { cout << b[0]; }

	system("pause");
}



