#include<bits/stdc++.h>

int main() {
    unsigned short a, b, j, temp = 5;
    std::cin >> a >> b;
    if(a == 2)
        j = 29;
    else
        j = (a%2 == 1 and a < 8) or (a%2 == 0 and a > 7) ? 31 : 30;
    j -= 24;
    temp += 1*(j>b-1);
    std::cout << temp;
}
