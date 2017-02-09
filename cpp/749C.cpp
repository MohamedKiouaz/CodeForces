#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    string s;
    unsigned n, d, r;
    cin >> n >> s;
    unsigned i = 0;
    while(count(s.begin(), s.end(), 'D') > 0 and count(s.begin(), s.end(), 'R') > 0) {
        if(s[i] == ' ') {
            i++;
            continue;
        }
        int j = i+1;
        while(1) {
            if(s[j] != s[i] and s[j] != ' ') {
                s[j] = ' ';
                break;
            }
            j++;
            if(j >= s.size())
                j = 0;
            if(j == i)
                break;
        }
        i++;
        if(i >= s.size())
            i = 0;
    }
    if(count(s.begin(), s.end(), 'D') > 0)
        cout << 'D' << endl;
    else
        cout << 'R' << endl;
}
