#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
#include <vector>

using namespace std;

inline vector<unsigned int> hexa(unsigned int n) {
    vector<unsigned int> s(16, 0);
    while(n > 0) {
        s[n%16]++;
        n = (n - n%16)/16;
    }
    return s;
}

int main()
{
    vector<unsigned int> s;
    unsigned int k, t, kk = 0, compteur = 0;

    cin >> k >> t;

    bool interessant;
    while(compteur <= k) {

        interessant = true;

        s = hexa(kk);

        for(unsigned int i = 0; i < 16; i++)
            if(s[i] > t) {
                interessant = false;
                //cout << s << " " << i << endl;
                break;
            }
        if(interessant == true) {
            compteur++;
        }
        kk++;

        //cout << s << " " << int(s[0]) << " " << kk << " " << compteur << endl;
    }
    cout << hex << kk-1 << endl;
}
