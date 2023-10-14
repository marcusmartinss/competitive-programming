// AC = 29 | TLE = 15

/* #include <bits/stdc++.h>

#define ll long long

using namespace std;

int main()
{
    int n;
    string t;
    
    cin >> n >> t;

    vector<string> S(n);

    for (int i = 0; i < n; ++i)
        cin >> S[i];

    ll count = 0;

    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
        {
            string concatenated = S[i] + S[j];
            int t_index = 0;

            for (char c : concatenated)
                if (t_index < t.length() && t[t_index] == c) t_index++;

            if (t_index == t.length()) count++;
        }

    cout << count << endl;

 return 0;
}
 */