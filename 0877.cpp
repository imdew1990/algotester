#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int min=1000000001, count = 0;
	for (int i = 0; i < n; i++)
	{
		int input;
		cin >> input;
		if (input <= min) { count++; min = input; }
	}
	cout << count;

}
