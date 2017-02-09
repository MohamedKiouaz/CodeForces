#include <iostream>

using namespace std;

int main()
{
    long int n, acc = 1;
    bool R=0, L=0, U=0, D=0;
    cin >> n;
    char c;
    for(int i = 0; i < n; i++) {
        cin >> c;
        R=R or (c=='R');
        L=L or (c=='L');
        D=D or (c=='D');
        U=U or (c=='U');
        if((R and L) or (D and U))
        {
            acc++;
            R=0; L=0; U=0; D=0;
            R=R or (c=='R');
            L=L or (c=='L');
            D=D or (c=='D');
            U=U or (c=='U');
        }
    }
    cout << acc << endl;
}
