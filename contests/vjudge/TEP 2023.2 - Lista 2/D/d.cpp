#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main()
{
	string s, t;
	cin >> s >> t;

	s[0] -= 'a';
	s[1] -= '0';
	t[0] -= 'a';
	t[1] -= '0';

	int dx = s[0] - t[0];
	int dy = s[1] - t[1];
	
	int moves = max(abs(dx), abs(dy));

	cout << moves << '\n';

	while( dx != 0 || dy != 0 )
	{
		if (dx > 0) {
            cout << "L";
            dx--;
        } else if (dx < 0) {
            cout << "R";
            dx++;
        }

		if (dy > 0) {
            cout << "D";
            dy--;
        } else if (dy < 0) {
            cout << "U";
            dy++;
        }

		cout << '\n';
	}

 return 0;
}
