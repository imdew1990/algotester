#include <bits/stdc++.h>
using namespace std;

int summa(int n)
{
	int temp = 0;
	while (n != 0)
	{
		temp += n % 10;
		n /= 10;
	}
	return temp;
}
int main()
{
	int n, count = 0;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		bool por = true;
		int p = summa(i);
		string k = to_string(p);
		for (int i = 0; i < k.size(); i++)
		{
			if (k[i] != '4' && k[i] != '7') { por = false; break; }
		}
		if (por)count++;
	}
	cout << count;
	system("pause");
}
