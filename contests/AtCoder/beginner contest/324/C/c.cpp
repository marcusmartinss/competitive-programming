// AC = 19 | WA = 7 | TLE = 6

/* #include <bits/stdc++.h>

#define ll long long

using namespace std;

int main()
{
    int n;
    string t2;
    
    cin >> n >> t2;
    
    vector<string> strings(n);

    for (int i = 0; i < n; ++i) cin >> strings[i];

    vector<int> matching_indices;

    for (int i = 0; i < n; ++i)
        if (t2 == strings[i])
            matching_indices.push_back(i + 1);
        else
            if (abs(int(t2.length() - strings[i].length())) <= 1)
            {
                for (int j = 0; j < strings[i].length(); ++j)
                {
                    string candidate = strings[i];
                    if (t2.length() == strings[i].length())
                        candidate[j] = t2[j];
                    else
                        if (t2.length() > strings[i].length())
                            candidate.insert(j, 1, t2[j]);
                        else
                            candidate.erase(j, 1);
                    
                    if (candidate == t2)
                    {
                        matching_indices.push_back(i + 1);
                        break;
                    }
                }
            }

    int size_index = matching_indices.size();

    cout << size_index << endl;

    if ( size_index > 0)
    {
        for (int i = 0; i < size_index; i++)
        {
            if ( i > 0 ) cout << ' ';
            
            cout << matching_indices[i];
        }
        
        cout << endl;
    }

 return 0;
}
 */