#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n; bool key = true;
	cin >> n; vector<int>a(n), b(n);
	for (int i = 0; i < a.size(); i++)
		cin >> a[i];
	for (int i = 0; i < b.size(); i++)
		cin >> b[i];
	for (int i = 0; i < a.size()/2; i++)
	{
		int temp = a[(a.size() - 1) - i];
		a[(a.size() - 1) - i] = a[i];
		a[i] = temp;
	}
	for (int i = 0; i < a.size(); i++)
	{
		if (a[i] != b[i]) { key = false; break; }
	}
	if (key) { cout << "Yes"; }
	else
	{
		cout << "No" << endl;
		copy(a.begin(), a.end(), ostream_iterator<int>(cout, " "));
	}
	
}