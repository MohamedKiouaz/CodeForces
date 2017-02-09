#include<bits/stdc++.h>

int main() {
    char c;
    unsigned n;
    long xk, yk, x, y;
    scanf("%u", &n);
    for(unsigned i = 0; i < n; i++) {
        scanf("%c %l %l\n", &c, &x, &y);
        if(     (c == 'R' and (x == xk or y == yk))
            or  (c == 'B'
            or  (c == 'Q')
        ) {
            printf("YES\n")
            return 0
        }
    }
    printf("NO\n");
    return 0;
}
