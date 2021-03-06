#include <bits/stdc++.h>
using namespace std;

int main()
{
	double a, b, c;
	double RC;
	cin >> a >> b >> c >> RC;
	double p = (a + b + c) / 2;
	double S = sqrt(p * (p - a) * (p - b) * (p - c));
	double R = (a * b * c) / (4 * S);
	double r = S / p;
	if (RC >= R) cout << "+";
	else cout << "-";
	if (RC <= r) cout << "+";
	else cout << "-";
	system("pause");
}



