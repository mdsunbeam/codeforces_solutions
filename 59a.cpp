#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int upper = 0;
    int lower = 0;
    cin >> s;
    for (int i = 0; i < (int)s.size(); i++)
    {
        if (90 >= s[i])
        {
            upper++;
        }
        if (97 <= s[i])
        {
            lower++;
        }
    }
    for (int j = 0; j < (int)s.size(); j++)
    {
        if (upper > lower)
        {
            cout << (char)toupper(s[j]);
        }
        else
        {
            cout << (char)tolower(s[j]);
        }
    }
}