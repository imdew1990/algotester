#include <iostream>
using namespace std;

int main()
{
	int n, m, k, a, p = 0;
	cin >> n >> m >> k;
	for (int i = 0; i < m; i++)
	{
		cin >> a;
		if (p + a <= k) { p += a; }
		else { p = a; n--; }
	}
	if (n - 1 < -1) { cout << "-1"; }
	else
	{
		cout << n - 1;
	}
	system("pause");
}
