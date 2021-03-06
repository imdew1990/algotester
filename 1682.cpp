#include <iostream>
using namespace std;

int main()
{
	unsigned long long int n, k;
	cin >> n >> k;
	if (k == 1)
		cout << 1;
	else
		if (k > n)
			cout << n * n;
		else
			cout << k*k;
}
