#include <bits/stdc++.h>
using namespace std;
int main()
{
    int input, n;
    cin >> input;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        if (input % 10 == 0)
        {
            input = input / 10;
        }
        else
        {
            input = input - 1;
        }
    }
    cout << input << endl;
}