#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, count = 0, i = 0;
	cin >> n;
	vector<int>a{ 500,200,100,50,20,10,5,2,1 };
	while (n > 0)
	{
		if ((n / a[i]))
		{
			count += n / a[i];
			n %= a[i];
			i++;
		}
		else i++;

	}
	cout << count;
	system("pause");
}


