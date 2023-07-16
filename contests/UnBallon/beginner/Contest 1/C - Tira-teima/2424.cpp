#include <iostream>

using namespace std;

int main()
{
    int input_x, input_y;
    cin >> input_x >> input_y;

    if ( (input_x >= 0 && input_x <= 432) && (input_y >= 0 && input_y <= 468) )
        cout << "dentro" << endl;
    else
        cout << "fora" << endl;

 return 0;
}
