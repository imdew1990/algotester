#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n, m;
	cin >> n;
	m = n;
	vector<int> a(n);
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	int i = 0;
	while (i < n - 1)
	{
		if (a[i] < a[i + 1])
		{
			a.erase(a.begin() + i);
			if (i > 0) { i--; }
			m--;
			n--;
		}
		else
		{
			i++;
		}
	}
	cout << n << endl;
	for (size_t i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
	system("pause");
}