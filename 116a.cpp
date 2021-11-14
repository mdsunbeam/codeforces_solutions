#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    vector<int> v;
    int max = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a;
        cin >> b;
        max -= a;
        max += b;
        v.push_back(max);
    }
    cout << *max_element(v.begin(), v.end()) << endl;
}