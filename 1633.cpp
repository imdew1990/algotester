#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	unsigned long long int n, m;
	cin >> n >> m;
	string s, t;
	cin >> s >> t;
	unsigned long long int count4 = count(s.begin(), s.end(), '4') * count(t.begin(), t.end(), '4');
	unsigned long long int count7 = count(s.begin(), s.end(), '7') * count(t.begin(), t.end(), '7');
	unsigned long long int p = (n + 1) * (m + 1) - 1 - count4 - count7;
	cout << p;
}