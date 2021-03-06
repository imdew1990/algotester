#include <bits/stdc++.h>
using namespace std;
typedef  unsigned long long int ulli;
void vivod(vector<int>a)
{
	cout << "yes\n";
	for (int i = 0; i < a.size(); i++)
	{
		cout << a[i] << " ";
	}
}
int main()
{
	int n, k;
	cin >> n >> k;
	vector<int>par, nepar, out;
	for (int i = 0; i < n; i++)
	{
		int p;
		cin >> p;
		if (p % 2 == 0)par.push_back(p);
		else nepar.push_back(p);
	}
	if (nepar.size() == 0) {
		cout << "no"; return 0;
	}
	out.push_back(nepar.back());
	nepar.pop_back();

	while (out.size() + 2 <= k && nepar.size() >= 2)
	{
		out.push_back(nepar.back());
		nepar.pop_back();
		out.push_back(nepar.back());
		nepar.pop_back();
	}

	while (out.size() + 1 <= k && par.size() >= 1)
	{
		out.push_back(par.back());
		par.pop_back();
	}
	if (out.size() != k) { cout << "no"; return 0; }
	vivod(out);
	system("pause");
}
