#include <iostream>
#include <utility>
#include <functional>
#include <vector>
#include <map>
#include <math.h>
using namespace std;
map<int, int> factorize(int x) {
    map<int, int> factors;

    for (int i = 2; i <= sqrt(x); i++) {
        while (x % i == 0) {
            factors[i]++;
            x /= i;
        }
    }

    if (x != 1) {
        factors[x]++;
    }

    return factors;
}
int main()
{
    int x;
    unsigned long long int y = 1;
    cin >> x;
    map<int, int>a = factorize(x);
    auto ItMap = a.begin();
    for (ItMap; ItMap != a.end(); ++ItMap)
    {
        if (ItMap->second % 2 != 0)
            y *= ItMap->first;
    }
    cout << y;
}
