#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <set>
using namespace std;
int main()
{
	int n, countq = 0, max = 0;
	cin >> n;
	set<int>a; multiset<int>b;
	for (int i = 0; i < n; i++)
	{
		int k;
		cin >> k;
		a.insert(k);
		b.insert(k);
	}
	for (auto i : a)
	{
		if (max < b.count(i))max = b.count(i);
	}
	cout << b.size() - max;
}


