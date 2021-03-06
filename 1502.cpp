#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n, count = 0;
	cin >> n;
	vector<int>a(n);
	for (int i = 0; i < a.size(); i++)
		cin >> a[i];
	int napram = 0; //up=0 down=1
	if (a[0] < a[1])napram = 0;
	else napram = 1;
	for (int i = 1; i < a.size(); i++)
	{
		int temp;
		if (a[i] > a[i - 1])temp = 0;
		else temp = 1;
		if (temp != napram) { count++; napram = temp; }
	}
	cout << count;
}