#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;
double Angel(double a, double b, double c)
{
	double cosAngel = (a * a + b * b - c * c) / (2 * a * b);
	return acos(cosAngel);
}
double area(double r, double angel)
{
	double S = 0.5 * r * r * angel - 0.5 * r * r * sin(angel);
	return S;
}
int main()
{
	double x0, y0, x1, y1, r0, r1;
	cin >> x0 >> y0 >> r0 >> x1 >> y1 >> r1;
	double d = hypot(x1 - x0, y1 - y0);
	if (d >= r1 + r0) { cout << "0"; return 0; }
	if (d <= abs(r0 - r1)) { cout << M_PI * min(r0, r1) * min(r0, r1); return 0; }
	double Alfa = Angel(r0, d, r1)*2;
	double Beta = Angel(r1, d, r0)*2;
	cout << area(r0, Alfa) + area(r1, Beta);
	system("pause");
}
