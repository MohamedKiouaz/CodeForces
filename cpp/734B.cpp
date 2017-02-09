#include<bits/stdc++.h>

int main() {
    unsigned int k2, k3, k5, k6, n;
    scanf("%u %u %u %u", &k2, &k3, &k5, &k6);
    n = std::min(std::min(k2, k5), k6);
    printf("%d", 256 * n + std::min(k2 - n, k3) * 32);
}
