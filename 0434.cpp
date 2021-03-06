#include <bits/stdc++.h>
using namespace std;

int main()
{
	int key = 0;
	string s, s1;
	cin >> s >> s1;

	vector<int> kil(27), kil1(27);
	for (long long i = 0; i <= s.length(); i++)
	{
		//char p = s.substr(i, 1);
		if (s[i] == 'a') { kil[0]++; }
		if (s[i] == 'b') { kil[1]++; }
		if (s[i] == 'c') { kil[2]++; }
		if (s[i] == 'd') { kil[3]++; }
		if (s[i] == 'e') { kil[4]++; }
		if (s[i] == 'f') { kil[5]++; }
		if (s[i] == 'g') { kil[6]++; }
		if (s[i] == 'h') { kil[7]++; }
		if (s[i] == 'i') { kil[8]++; }
		if (s[i] == 'j') { kil[9]++; }
		if (s[i] == 'k') { kil[10]++; }
		if (s[i] == 'l') { kil[11]++; }
		if (s[i] == 'm') { kil[12]++; }
		if (s[i] == 'n') { kil[13]++; }
		if (s[i] == 'o') { kil[14]++; }
		if (s[i] == 'p') { kil[15]++; }
		if (s[i] == 'q') { kil[16]++; }
		if (s[i] == 'r') { kil[17]++; }
		if (s[i] == 's') { kil[18]++; }
		if (s[i] == 't') { kil[19]++; }
		if (s[i] == 'u') { kil[20]++; }
		if (s[i] == 'v') { kil[21]++; }
		if (s[i] == 'w') { kil[22]++; }
		if (s[i] == 'x') { kil[23]++; }
		if (s[i] == 'y') { kil[24]++; }
		if (s[i] == 'z') { kil[25]++; }
	}
	for (long long i = 0; i <= s1.length(); i++)
	{
		//char p = s.substr(i, 1);
		if (s1[i] == 'a') { kil1[0]++; }
		if (s1[i] == 'b') { kil1[1]++; }
		if (s1[i] == 'c') { kil1[2]++; }
		if (s1[i] == 'd') { kil1[3]++; }
		if (s1[i] == 'e') { kil1[4]++; }
		if (s1[i] == 'f') { kil1[5]++; }
		if (s1[i] == 'g') { kil1[6]++; }
		if (s1[i] == 'h') { kil1[7]++; }
		if (s1[i] == 'i') { kil1[8]++; }
		if (s1[i] == 'j') { kil1[9]++; }
		if (s1[i] == 'k') { kil1[10]++; }
		if (s1[i] == 'l') { kil1[11]++; }
		if (s1[i] == 'm') { kil1[12]++; }
		if (s1[i] == 'n') { kil1[13]++; }
		if (s1[i] == 'o') { kil1[14]++; }
		if (s1[i] == 'p') { kil1[15]++; }
		if (s1[i] == 'q') { kil1[16]++; }
		if (s1[i] == 'r') { kil1[17]++; }
		if (s1[i] == 's') { kil1[18]++; }
		if (s1[i] == 't') { kil1[19]++; }
		if (s1[i] == 'u') { kil1[20]++; }
		if (s1[i] == 'v') { kil1[21]++; }
		if (s1[i] == 'w') { kil1[22]++; }
		if (s1[i] == 'x') { kil1[23]++; }
		if (s1[i] == 'y') { kil1[24]++; }
		if (s1[i] == 'z') {
			kil1
				[25]++;
		}
	}
	for (int i = 0; i < 26; i++)
	{
		if (kil[i] < kil1[i])
		{
			key = -1;
			goto por;
		}
		key++;

	}
por:
	if (key > 0) { cout << "YES"; }
	else
	{
		cout << "NO";
	}
	system("pause");
}