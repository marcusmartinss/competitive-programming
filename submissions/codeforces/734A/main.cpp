#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n; cin >> n;

	string s; cin >> s;
	int anton, danik; anton = danik = 0;

	for (auto c : s)
		c == 'A'? anton++ : danik++;

	if (anton > danik) cout << "Anton\n";
	else if (anton < danik) cout << "Danik\n";
	else cout << "Friendship\n";

 return 0;
}
