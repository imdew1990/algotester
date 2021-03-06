#include <iostream>

using namespace std;

int main()
{
	int x, y, z, min, max;
	cin >> x >> y >> z;
	min = x - y;
	max = x + y;
	if (min > z) { cout << "-1"; }
	else
	{
		if (max >= z) { cout << z; }
		else
		{
			cout << max;
		}
	}
	system("pause");
}