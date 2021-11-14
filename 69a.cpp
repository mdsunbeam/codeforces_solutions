#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, s;
    vector<int> arr_x;
    vector<int> arr_y;
    vector<int> arr_z;
    cin >> n;
    for (int i = 0; i < 3 * n; i++)
    {
        cin >> s;
        if (i % 3 == 0)
        {
            arr_x.push_back(s);
        }
        if (i % 3 == 1)
        {
            arr_y.push_back(s);
        }
        if (i % 3 == 2)
        {
            arr_z.push_back(s);
        }
    }
    int x_sum = 0;
    int y_sum = 0;
    int z_sum = 0;
    for (auto &b : arr_x)
    {
        x_sum += b;
    }
    for (auto &b : arr_y)
    {
        y_sum += b;
    }
    for (auto &b : arr_z)
    {
        z_sum += b;
    }
    if (x_sum == 0 && y_sum == 0 && z_sum == 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}
