#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n, i = 1, temp = 0;
	bool key=1;
	cin >> n;
	cin >> temp;
	while (i < n)
	{
		int p;
		cin >> p;
		if (p - temp < 2) { key = 0; }
		temp = p;
		i++;
	}
	if (key)
		cout << "YES";
	else
		cout << "NO";
}
