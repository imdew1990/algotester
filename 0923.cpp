#include <iostream>
using namespace std;

int main()
{
	int n, m, a[101][101], k = 0;
	cin >> n >> m;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
		{
			cin >> a[i][j]; k += a[i][j];
		}
	cout << k << endl;
	for (int i = n - 1; i >= 0; --i)
	{
		for (int j = m - 1; j >= 0; --j)
		{
			for (int k = a[i][j] - 1; k >= 0; --k)
			{
				printf("%d %d %d\n", i + 1, j + 1, k + 1);
			}
		}
	}
	system("pause");
}
