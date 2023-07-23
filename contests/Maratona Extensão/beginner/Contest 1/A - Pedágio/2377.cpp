#include <iostream>

using namespace std;

int main()
{
    int length, distance;
    cin >> length >> distance;

    int cost_per_km, toll_value;
    cin >> cost_per_km >> toll_value;

    int total = (length * cost_per_km) + ( (length / distance) * toll_value );
    cout << total << endl;

 return 0;
}
