#include <iostream>

using namespace std;

int main()
{
    int a1, b1, a2, b2, a3, b3;
    cin >> a1 >> b1 >> a2 >> b2 >> a3 >> b3;
    cout << 3 << endl;
    cout << a1 + a3 - a2 << " " << b1 + b3 - b2 << endl;
    cout << a2 + a1 - a3 << " " << b2 + b1 - b3 << endl;
    cout << a3 + a2 - a1 << " " << b3 + b2 - b1 << endl;
}
