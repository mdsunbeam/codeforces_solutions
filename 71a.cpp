#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    int l;
    cin >> l;
    for (int i = 0; i < l; i++)
    {
        cin >> str;
        if (str.size() <= 10)
        {
            cout << "\n"
                 << str << endl;
        }
        else
        {
            cout << str[0] << str.size() - 2 << str[str.size() - 1] << endl;
        }
    }
}