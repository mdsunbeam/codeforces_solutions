#include <bits/stdc++.h>
using namespace std;
int main()
{
    string input;
    cin >> input;
    int i = 0;
    while (input[i])
    {
        if (i == 0)
        {
            cout << (char)toupper(input[i]);
        }
        else
        {
            cout << input[i];
        }
        i++;
    }
}