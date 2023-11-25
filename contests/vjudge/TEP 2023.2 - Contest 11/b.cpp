#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n; cin.ignore();

    string s; getline(cin, s);

    string abc = "ABC";

    int result = 0;
    
    if (s.find(abc) == string::npos)
    {
        cout << "0\n";
    }
    else
    {
        int pos = 0;

        while ( (pos = s.find(abc, pos)) != string::npos )
        {
            pos += abc.size();
            result++;
        }
        
        cout << result << '\n';
    }

 return 0;
}
