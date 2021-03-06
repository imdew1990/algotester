#include <iostream>
#include <string>
#include <vector> 
#include <algorithm>
using namespace std;
int main()
{
	int n;
	cin >> n;
	vector<int>a;
	for (int i = 0; i < n * 2; i++)
	{
		int temp; cin >> temp; a.push_back(temp);
	}
	sort(a.begin(), a.end());
	for (int i = 0; i < n * 2; i += 2)
		cout << a[i] << " " << a[i + 1] << endl;
}
