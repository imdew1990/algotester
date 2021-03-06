#include <iostream>
#include <iomanip>
using namespace std;
# define M_PI 3.14159265358979323846
int main()
{
	double r, x;
	int k;
	cin >> x >> k >> r;
	cout << fixed << setprecision(7) << 2 * r * M_PI * k * x;
	system("pause");
}
