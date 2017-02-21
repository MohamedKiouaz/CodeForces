#include<bits/stdc++.h>

int main() {
    unsigned short a, b;
    std::cin >> a >> b;
    if(a > b + 1 or a < b - 1 or (a == 0 and b == 0))
        std::cout << "NO\n";
    else
        std::cout << "YES\n";
}
