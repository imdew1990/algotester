#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;
void vivod(vector<int>a)
{
	sort(a.begin(), a.end());
	for (auto it = a.begin(); it != a.end(); it++)
		cout << *it << " ";
}
int main()
{
	map<int, int>a;
	vector<int>a1;
	int n, k;
	cin >> n >> k;
	for (int i = 0; i < n; i++)
	{
		int p;
		cin >> p;
		a1.push_back(p);
		a[p]++;
	}
	for (auto it = a.begin(); it != a.end(); it++)
	{
		if (it->second >= k) { vivod(a1); return 0; }
	}
	cout << "Oh sh*t";
}
