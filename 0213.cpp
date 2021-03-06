#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;
	vector<int> max(m,0),arr(m);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < arr.size(); j++)
		{
			cin >> arr[j];
			if (arr[j] > max[j])max[j] = arr[j];
		}
	}
	int sum = 0;
	for (int j = 0; j < max.size(); j++)
	{
		sum += max[j];
	}
	cout << sum;
}
