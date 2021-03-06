#include <iostream>

using namespace std;

int main() {
	long int n, k, m, max = 0, kmax = 0;
	cin >> n >> k;
	for (int i = 0; i < n; i++) {
		cin >> m;
		if (m >= k)max++;
		else max = 0;
		if (max > kmax)kmax = max;
	}
	cout << kmax;
	cout << endl;
	return 0;
}
