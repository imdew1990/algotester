#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;
	int i = (a * b) % 2;

	if (i == 0) { cout << "Dragon"; }
	else
	{
		cout << "Imp";
	}
	system("pause");
}
