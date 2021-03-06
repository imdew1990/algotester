#include <iostream>
#include <string>
using namespace std;
int count(string a, char p)
{
	int sum = 0;
	for (auto it = a.begin(); it != a.end(); it++)
		if (*it == p)sum++;
	return sum;
}
int main()
{
	string s;
	int sx, sy, x = 0, y = 0;
	cin >> s >> sx >> sy;
	if (count(s, 'U') >= sy && count(s, 'R') >= sx)cout << "YES";
	else cout << "NO";
}
