#include <iostream>
using namespace std;

int main()
{
	int l, w, u, d;
	cin >> l >> w >> u >> d;
	if (l > w) { cout << "Forget about the cocktails, man!"; return 0; }
	if (l > u + d) { cout << "Forget about the cocktails, man!"; return 0; }
	cout << "Three times Sex on the Beach, please!";
	system("pause");
}
