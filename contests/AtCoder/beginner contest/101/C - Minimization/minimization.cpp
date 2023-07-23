#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int n, k, ans;
    cin >> n >> k;

    n--; k--;
    
    if ( (n % k) != 0 )
        ans = (n / k) + 1;
    else
        ans = (n / k);

    cout << ans << endl;

 return 0;
}