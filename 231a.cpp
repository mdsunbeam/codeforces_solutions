#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, j;
    int ans = 0;
    cin >> n;
    vector<int> arr;
    for (int i = 1; i <= 3 * n; i++)
    {
        cin >> j;
        arr.push_back(j);
        if (i % 3 == 0)
        {
            int sum = arr[i - 1] + arr[i - 2] + arr[i - 3];
            if (sum >= 2)
            {
                ans++;
                sum = 0;
            }
        }
    }
    cout << ans << endl;
}