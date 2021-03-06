#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n; int kola = 0, vasa = 0, finalk = 0, finalv = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		char k;
		cin >> k;
		if (k == 'V')vasa++;
		else kola++;
		if (kola >= 11 || vasa >= 11)
			if (abs(kola - vasa) >= 2)
				if (kola > vasa) {
					finalk++; kola = 0; vasa = 0;
				}
				else { finalv++; kola = 0; vasa = 0; }

	}
	cout << finalk << ":" << finalv << "\n";
	if (kola != 0 || vasa != 0) { cout << kola << ":" << vasa; }
	system("pause");
}
