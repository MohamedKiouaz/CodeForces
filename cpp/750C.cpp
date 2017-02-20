#include <iostream>
#include <limits>

using namespace std;

int main()
{
    int n, a, b, ci, di, mi = numeric_limits<int>::min(), ma = numeric_limits<int>::max();
    bool bb = true;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> ci >> di;
        if(!i) {
            a = di == 1 ? 1900 : mi;
            b = di == 1 ? ma : 1899;
        }
        bb = bb and di == 1;
        a = di == 1 and a < 1900 ? 1900 : a;
        b = di == 2 and b > 1899 ? 1899 : b;
        a = ci >= 0 or (mi - ci < a) ? a + ci : mi;
        b = ci <= 0 or (ma - ci > b) ? b + ci : ma;
        if (a > b)
            break;
    }
    if(a > b)
        cout << "Impossible";
    else if (bb == true)
        cout << "Infinity";
    else
        cout << b;
    cout << endl;
}
