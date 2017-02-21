#include<iostream>

int main()
{
    int n, a[10000];
    std::cin >> n;
    for(int i = 0; i < n; i++) {
        std::cin >> a[i];
    }
    if(n == 2)
        std::cout << (a[0] > a[1] ? 1 : 0);
    else
        for(int i = 0; i < n; i++) {
            if(not(a[( i + 1) % n] > a[i] and a[i] >= a[(i - 1 + n) % n])) {
                std::cout << "-1";
                break;
            }
        }
}
