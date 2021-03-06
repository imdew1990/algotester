#include <iostream>
#include <math.h>
using namespace std;
double mycos(double a, double b, double c)
{
	return (pow(b, 2) + pow(c, 2) - pow(a, 2)) / (2 * c * b);
}
int main()
{
	double x, y, x1, y1, x2, y2, min, p, h;
	cin >> x >> y >> x1 >> y1 >> x2 >> y2;
	double a = hypot(x1 - x2, y1 - y2);
	double b = hypot(x - x1, y - y1);
	double c = hypot(x - x2, y - y2);
	p = (a + b + c) / 2;

	if (mycos(b, a, c) < 0)
	{
		min = c;
	}
	else
		if (mycos(c, a, b) < 0)
		{
			min = b;
		}
		else
			min = (2 * sqrt(p * (p - a) * (p - b) * (p - c))) / a;
	cout << min;
	system("pause");
}