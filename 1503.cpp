#include <iostream>
#include <string>
using namespace std;
int main()
{
	int n, alarm;
	cin >> n >> alarm;
	int max = 0, min = 0;
	for (int i = 0; i < n; i++)
	{
		int temp, temp1;
		cin >> temp >> temp1;
		min += temp; max += temp1;
	}
	if (max >= alarm && min >= alarm) cout << "Certainly";
	else if (max >= alarm && min < alarm) cout << "Possibly";
	else cout << "Impossible";
}

