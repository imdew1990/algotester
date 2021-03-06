#include <iostream>
#include <math.h>
#include <iomanip>
#include <algorithm>
#include <vector>
using namespace std;

long double distance(long double x1, long double y1, long double x2, long double y2);

int main() {
	long double x, y, x1[10000], y1[10000], d[10000];
	long double min;
	cin >> x >> y;
	int n, k, i;
	cin >> n >> k;
	for (i = 0; i < n; i++) {
		cin >> x1[i] >> y1[i];
		d[i] = distance(x, y, x1[i], y1[i]);
		//cout << "\n d=" << d[i] << endl;
	}
	vector<double> mymas(d, d + n);
	sort(mymas.begin(), mymas.begin() + n);

	cout << setprecision(5) << mymas[k - 1];
	system("pause");
}
long double distance(long double x1, long double y1, long double x2, long double y2)
{
	return
		sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

