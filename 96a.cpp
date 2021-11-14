#include <bits/stdc++.h>
using namespace std;
int main()
{
    string input;
    cin >> input;
    int t_count = 0;
    for (int i = 0; i < (int)input.size(); i++)
    {
        if (input[i] == input[i + 1])
        {
            if (t_count == 6)
            {
                break;
            }
            t_count++;
        }
        if (input[i] != input[i + 1] && t_count != 6)
        {
            t_count = 0;
        }
    }
    if (t_count == 6)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}