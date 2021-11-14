#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str1, str2;
    cin >> str1;
    cin >> str2;
    int result = 0;
    for (int i = 0; i < (int)str1.length(); i++)
    {
        if ((int)str1[i] > 90)
        {
            str1[i] = (int)str1[i] - 32;
        }
        if ((int)str2[i] > 90)
        {
            str2[i] = (int)str2[i] - 32;
        }
    }
    for (int j = 0; j < (int)str1.length(); j++)
    {
        if ((int)str1[j] > (int)str2[j])
        {
            result = 1;
            break;
        }
        if ((int)str2[j] > (int)str1[j])
        {
            result = -1;
            break;
        }
    }
    cout << result << endl;
}