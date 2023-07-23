#include <bits/stdc++.h>

using namespace std;

int main()
{
    int mind = 0;
    string s;
    getline(cin, s);

    for (char c : s)
    {
        if( c == '+' )
            mind++;
        
        if ( c == '-')
            mind--;
    }

    cout << mind << endl;

 return 0;
}