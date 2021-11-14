#include <bits/stdc++.h>
using namespace std;

int moves[] = {1, 2, 3, 4, 5};
int n = sizeof(moves) / sizeof(moves[0]);

void minchange(int sum)
{
    vector<int> move;
    for (int i = n - 1; i >= 0; i--)
    {
        while (sum >= moves[i])
        {
            sum -= moves[i];
            move.push_back(moves[i]);
        }
    }
    cout << move.size() << endl;
}

int main()
{
    int input;
    cin >> input;
    minchange(input);
}