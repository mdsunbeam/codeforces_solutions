#include <bits/stdc++.h>
using namespace std;
int main()
{
    string input;
    cin >> input;
    int i = 0;
    while (input[i])
    {
        if ((char)tolower(input[i]) == 'a' || (char)tolower(input[i]) == 'e' || (char)tolower(input[i]) == 'i' || (char)tolower(input[i]) == 'o' || (char)tolower(input[i]) == 'u' || (char)tolower(input[i]) == 'y')
        {
        }
        else
        {
            cout << '.' << (char)tolower(input[i]);
        }
        i++;
    }
}
