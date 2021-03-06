#include <iostream>
#include <vector>
using namespace std;
bool up (vector<int>a)
{
	for (int i = 0; i <a.size()-1; i++)
	{
		if (a[i] <= a[i + 1]) continue;
		return false;
	}
	return true;
}
bool down(vector<int>a)
{
	for (int i = 0; i < a.size() - 1; i++)
	{
		if (a[i] >= a[i + 1]) continue;
		return false;
	}
	return true;
}
int main()
{
	int n;
	cin >> n;
	vector<int>a(n);
	for (auto it = a.begin(); it != a.end(); it++)
		cin >> *it;
	if (up(a) || down(a))cout << "YES";
	else cout << "NO";
}
