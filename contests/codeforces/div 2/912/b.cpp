// #include <iostream>
// #include <vector>

// using namespace std;

// const int MAX_N = 1000;
// const int MAX_M = 1000;

// bool check(vector<int> &a, vector<vector<int>> &M) {
//   for (int i = 0; i < a.size(); i++) {
//     for (int j = i + 1; j < a.size(); j++) {
//       if (M[i][j] != (a[i] | a[j])) {
//         return false;
//       }
//     }
//   }
//   return true;
// }

// vector<int> solve(int n, vector<vector<int>> &M) {
//   for (int i = 0; i < (1 << 30); i++) {
//     vector<int> a(n, 0);
//     for (int j = 0; j < n; j++) {
//       a[j] = i & (1 << j);
//     }
//     if (check(a, M)) {
//       return a;
//     }
//   }
//   return vector<int>();
// }

// int main() {
//   int t;
//   cin >> t;
//   while (t--) {
//     int n;
//     cin >> n;
//     vector<vector<int>> M(n, vector<int>(n));
//     for (int i = 0; i < n; i++) {
//       for (int j = 0; j < n; j++) {
//         cin >> M[i][j];
//       }
//     }

//     vector<int> a = solve(n, M);
//     if (!a.empty()) {
//       cout << "YES" << endl;
//       for (int i = 0; i < a.size(); i++) {
//         cout << a[i] << " ";
//       }
//       cout << endl;
//     } else {
//       cout << "NO" << endl;
//     }
//   }
//   return 0;
// }
