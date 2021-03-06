#include <bits/stdc++.h>
using namespace std;

int main()
{
	string::size_type pos{};
	string s, s1, substring, substring1, s2;
	int count1 = 0, count2 = 0, count3 = 0, count4 = 0, count;
	cin >> s >> s1;
	substring = "ku";
	substring1 = "kyu";
	while ((pos = s.find(substring, pos)) != string::npos)
	{
		count1++;
		pos++;
	}
	pos = 0;
	//cout << "in s1 is ku=" << count1<<endl;
	while ((pos = s.find(substring1, pos)) != string::npos)
	{
		count2++;
		pos++;
	}
	pos = 0;
	//cout << "in s1 is kyu=" << count2 << endl;
	while ((pos = s1.find(substring, pos)) != string::npos)
	{
		count3++;
		pos++;
	}
	pos = 0;
	//cout << "in s1 is ku=" << count3 << endl;

	while ((pos = s1.find(substring1, pos)) != string::npos)
	{
		count4++;
		pos++;
	}
	//cout << "in s1 is kyu=" << count4 << endl;
	count1 *= 2;
	count1 += count2;
	count3 *= 2;
	count3 += count4;
	count = count1 + count3;
	while (count >= 2)
	{
		s2 += "ku";
		count -= 2;
	}
	while (count > 0)
	{
		s2 += "kyu";
		count--;
	}
	cout << s2;
	system("pause");
}
