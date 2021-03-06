#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	int n, b, sum;
	cin >> n >> b;
	vector<long> a(n);
	vector<long> k(b);
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];

	}
	for (int i = 0; i < b; i++)
	{
		cin >> k[i];

	}
	auto mina = min_element(a.cbegin(), a.cend());
	auto maxa = min_element(k.cbegin(), k.cend());
	sum = (*maxa + *mina);
	cout << sum;
	system("pause");
}
