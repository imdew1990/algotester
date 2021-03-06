#include <bits/stdc++.h>
using namespace std;
long gcd(long a, long b) {

	if (a == b) {
		return a;
	}
	if (a > b) {
		long tmp = a;
		a = b;
		b = tmp;
	}
	return gcd(a, b - a);
}
long nsk(long a, long b)
{
	return a * b / gcd(a, b);
}
int main()
{
	int i, j, k;
	cin >> i >> j >> k;
	cout << nsk(nsk(i, j), k);
}