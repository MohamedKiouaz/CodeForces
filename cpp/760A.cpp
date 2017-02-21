#include<bits/stdc++.h>

int main() {
    unsigned short a, b, j;
    std::cin >> a >> b;
    if(a == 2)
        j = 28;
    else
        j = (a%2 == 1 and a < 8) or (a%2 == 0 and a > 7) ? 31 : 30;
    std::cout << (j+b+5)/7;
}
