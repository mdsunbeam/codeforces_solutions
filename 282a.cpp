#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int x = 0;
    string str;
    cin >> n;
    vector<string> v;
    for (int i = 0; i < n; i++)
    {
        cin >> str;
        v.push_back(str);
    }
    for (int j = 0; j < n; j++)
    {
        if (v[j] == "++X")
        {
            x++;
        }
        if (v[j] == "X++")
        {
            x++;
        }
        if (v[j] == "--X")
        {
            x--;
        }
        if (v[j] == "X--")
        {
            x--;
        }
    }
    cout << x << endl;
}