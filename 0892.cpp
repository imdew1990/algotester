#include <iostream>
using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;
	if (a == 0) { for (int i = 0; i < b; i++) { cout << "G"; } }
	else
	{
		if (a == b) { for (int i = 0; i < a; i++) { cout << "GY"; } }
		else {
			if (b == 0) { for (int i = 0; i < a; i++) { cout << "Y"; } }
			else
			{
				if (a < b) {
					for (int i = 0; i < a; i++) { cout << "GY"; }  for (int i = 0; i < b - a; i++) { cout << "G"; }
				}
				else
				{
					if (b < a) { for (int i = 0; i < b; i++) { cout << "YG"; }  for (int i = 0; i < a - b; i++) { cout << "Y"; } }
				}
			}

		}
	}


	system("pause");
}