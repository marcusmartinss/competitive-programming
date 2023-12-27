/* #include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int n, k;
        cin >> n >> k;

        ll a[n];

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        // Check if it's possible to sort the array using at most k reversals
        bool possible = true;
        for (int i = 0; i < n; i++) {
            int min_index = i;
            for (int j = i + 1; j < n; j++) {
                if (a[j] < a[min_index]) {
                    min_index = j;
                }
            }

            if (i != min_index) {
                // Check if the subarray can be reversed
                if (min_index - i + 1 <= k) {
                    reverse(a + i, a + min_index + 1);
                } else {
                    possible = false;
                    break;
                }
            }
        }

        if (possible) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
 */