#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s; 

    getline(cin, s);

    if (s == "Sunny")
        cout << "Cloudy\n";
    else if (s == "Cloudy")
        cout << "Rainy\n";
    else if (s == "Rainy")
        cout << "Sunny\n";

 return 0;        
}