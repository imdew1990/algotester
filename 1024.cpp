#include <vector>
#include <iostream>
#include <string>
#include <math.h>
using namespace std;
vector<char>a;
int n, kil = 0; string s;

void output(vector<char> a) // вивід масива
{
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i];
    }
    cout << endl;
}

bool check(int pos) // перевірка чи є строка s в масиві а, pos - кількість букв в масиві а 
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != a[pos - s.length() + i]) return false; 
    }
    return true;
}

void f(int num = 0) // повний лексикографічний перебір комбінацій. num - індекс масиву з якого починаєм завжди 0
{
    if (num >= s.size()) // перевіряєм коли кількість букв є більша рівна за довжину строки s
        if (check(num)) // якщо підстрічка знайдена то повертаємось вверх по рекурсії ( не знаю чи так можна сказати)
        {
            //output(a);
            return;
        }
            

    if (num == n) // умова виходу з рекурсії
    {
        kil++;
        return;
    }
    a[num] = 'A';
    f(num + 1);
    a[num] = 'B';
    f(num + 1);
    a[num] = 'C';
    f(num + 1);
}
int main()
{
    cin >> n;
    a.resize(n);
    cin >> s;
    f(0); 
    cout << kil;
    
}


