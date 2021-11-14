#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    int years = 0;
    cin >> a;
    cin >> b;
    for (int i = 1; i < 100; i++)
    {
        a = 3 * a;
        b = 2 * b;
        if (a > b)
        {
            years = i;
            break;
        }
    }
    cout << years << endl;
}
