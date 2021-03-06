#include <iostream>
using namespace std;

int main()
{
	int max = -1, min = 1000000000, n;
	cin >> n;
	for (int  i = 0; i < n; i++)
	{
		int p;
		cin >> p;
		if (p > max)max = p;
		if (p < min)min = p;
	}
	cout << max - min;
	system("pause");
}

