#include <bits/stdc++.h>
using namespace std;

int main()
{
    map <char, int> chars;
    map <char, int>::iterator begin, at, end;
    int count = 0;
    string str;
    cin >> str;

    for (unsigned int i = 0; i < str.size(); i++) {
        chars[str[i]]++;
    }

    begin = chars.begin();
    end = chars.end();
    for (at = begin; at != end; at++) {
        if (at->second % 2 != 0)
            count++;
    }
    if (str.size() % 2 == 0 && count == 0) {
        cout << "YES"; return 0;
    }
    if (str.size() % 2 != 0 && count == 1)cout << "YES";
    else cout << "NO";
	system("pause");
}
