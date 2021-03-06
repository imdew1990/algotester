#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main()
{
	int n, k;
	cin >> n >> k;
	long double p = 1;
	p /= n;
	p /= k;
	if (n == 0 || k == 0)cout << 0;
	else
	cout << fixed << setprecision(9)<< p;
}
