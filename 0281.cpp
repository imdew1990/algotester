#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	int cout1 = 0;
	cin >> s;
	vector<int> kil(27);
	for (long long i = 0; i <= s.length(); i++)
	{
		//char p = s.substr(i, 1);
		if (s[i] == 'A') { kil[0]++; }
		if (s[i] == 'B') { kil[1]++; }
		if (s[i] == 'C') { kil[2]++; }
		if (s[i] == 'D') { kil[3]++; }
		if (s[i] == 'E') { kil[4]++; }
		if (s[i] == 'F') { kil[5]++; }
		if (s[i] == 'G') { kil[6]++; }
		if (s[i] == 'H') { kil[7]++; }
		if (s[i] == 'I') { kil[8]++; }
		if (s[i] == 'J') { kil[9]++; }
		if (s[i] == 'K') { kil[10]++; }
		if (s[i] == 'L') { kil[11]++; }
		if (s[i] == 'M') { kil[12]++; }
		if (s[i] == 'N') { kil[13]++; }
		if (s[i] == 'O') { kil[14]++; }
		if (s[i] == 'P') { kil[15]++; }
		if (s[i] == 'Q') { kil[16]++; }
		if (s[i] == 'R') { kil[17]++; }
		if (s[i] == 'S') { kil[18]++; }
		if (s[i] == 'T') { kil[19]++; }
		if (s[i] == 'U') { kil[20]++; }
		if (s[i] == 'V') { kil[21]++; }
		if (s[i] == 'W') { kil[22]++; }
		if (s[i] == 'X') { kil[23]++; }
		if (s[i] == 'Y') { kil[24]++; }
		if (s[i] == 'Z') { kil[25]++; }
	}
	for (int i = 0; i <= 25; i++)
	{
		if (kil[i] > 0) { cout1++; }
	}
	cout << cout1;
	system("pause");
}

