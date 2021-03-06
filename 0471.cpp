#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
	int n, k;
	cin >> n >> k;
	vector<int>a(n);
	for (int i = 0; i < n; i++)
		a[i] = i + 1;
	reverse(a.begin(), a.begin() + (n - k + 1));
	for (int i = 0; i < a.size(); i++)
		cout << a[i] << " ";
}