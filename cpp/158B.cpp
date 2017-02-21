#include<iostream>
#include <math.h>

int main() {
    int n, temp, acc = 0;
    std::cin >> n;
    for(int i = 0; i < n; i++) {
        std::cin >> temp;
        acc += temp;
    }
    std::cout << ceil(double(acc)/4) << "\n";
}
