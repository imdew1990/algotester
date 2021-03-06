#include <iostream>
#include <string>
using namespace std;
int main()
{
	int k = 0, n;
	string s;
	getline(cin, s);
	n = s.size();
	for (int i = 0; i < n - 1; i++)
	{
		if (s[i] == s[i + 1]) { k++; }
	}
	cout << k;
	system("pause");
}