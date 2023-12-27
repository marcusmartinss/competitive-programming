#include <bits/stdc++.h>

using namespace std;

int count_pairs(vector<pair<int, int>>& pos, int n, int low, int high)
{
    int count = 0;

    for (int i = 0; i < n - 1; ++i)
    {
        for (int j = i + 1; j < n; ++j)
        {
            int deltax = pos[j].first - pos[i].first;
            int deltay = pos[j].second - pos[i].second;

            double incl = static_cast<double>(deltay) / deltax;

            if (incl >= low && incl <= high) {
                ++count;
            }
        }
    }

 return count;
}

int main()
{
    int n; cin >> n;
    vector<pair<int, int>> pos(n);

    for (int i = 0; i < n; i++)
        cin >> pos[i].first >> pos[i].second;
    
    cout << count_pairs(pos, n, -1, 1) << '\n';

 return 0;
}
