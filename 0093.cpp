#include <bits/stdc++.h>
using namespace std;
# define M_PI 3.1417
int main()
{
	int n;
	double p = 0, s = 1, sum = 0;
	cin >> n;
	double i = n / 2;

	while (sum != M_PI)
	{
		sum = 0;
		for (int j = 1; j <= n; j++)
		{
			sum += asin(j / (2 * i));
		}
		sum = round(sum * 10000) / 10000;
		i += 0.0001;

		//	cout << i <<" "<<sum<< endl;
	}
	cout << i;
	system("pause");
}

