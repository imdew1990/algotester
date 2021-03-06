#include <iostream>
#include <vector>
using namespace std;
void vivod(vector<int>a)
{
    for (auto it = a.begin(); it != a.end(); it++)
        cout << *it;
}
int main()
{
    int n, k;
    vector<int>a;
    cin >> n >> k;
    int max = (n - 1) * 3;
    if (k % 3 != 0 || k > max) { cout << "-1"; return 0; }

    while (n > k / 3)
    {
        a.push_back(7);
        n--;
    }
    while (n > 0)
    {
        if (k >= 3) {
            if (abs(a.back() - 7) == 3)a.push_back(7);
            else a.push_back(4); k -= 3;
        }
        else { a.push_back(a.back()); }
        n--;
    }
    vivod(a);
}


