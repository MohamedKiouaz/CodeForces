#include<bits/stdc++.h>

int main() {
    unsigned short n, k, i = 0;
    scanf("%hu %hu", &n, &k);
    while(5 * i * (i + 1) / 2 <= 240 - k and i <= n)
        i++;
    printf("%hu", i - 1);

}
