#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
	int n;
	int k;
	cin >> n >> k;
	string s;
	if (k > n) { cout << "-1"; return 0; }
	s += "a";
	while (s.size() < n - (k - 2))
	{
		if (s.back() == 'a')s += "b";
		else s += "a";
	}
	for (int i = 99; i < 99 + (k - 2); i++)
		s += (char)i;
	cout << s;
}