#include <iostream>

int main() {
    unsigned n, minn, maxx, m = 0, temp;
    std::cin >> n;
    std::cin >> minn;
    maxx = minn;
    for(unsigned i = 0; i < n - 1; i++) {
        std::cin >> temp;
        if(temp > maxx) {
            maxx = temp;
            m++;
        }
        if(temp < minn) {
            minn = temp;
            m++;
        }
    }
    std::cout << m << "\n";
}
