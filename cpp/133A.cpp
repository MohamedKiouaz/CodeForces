#include<bits/stdc++.h>

int main() {
    std::string s;
    std::cin >> s;
    for(int i = 0; i < s.size(); i++) {
        if(s[i] == 'H' or s[i] == '9' or s[i] == 'Q') {
            std::cout << "YES" << std::endl;
            return 0;
        }
    }
    std::cout << "NO" << std::endl;
    return 0;
}
