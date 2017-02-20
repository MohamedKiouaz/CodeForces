#include<bits/stdc++.h>

inline bool euclide(unsigned n, unsigned m) {
    unsigned r;
    if(m > n) {
        r = n;
        n = m;
        m = r;
    }
    r = n%m;
    while(r!=0) {
        n = m;
        m = r;
        r = n%m;
    }
    return m != 1;
}

unsigned liste[2000];

int main()
{
    unsigned n, temp0, temp1, acc = 0;
    scanf("%d", &n);
    for (unsigned short i = 0; i < n; i++) {
        scanf("%d", &temp1);
        if(i >= 1 and euclide(temp1, temp0)) {
            liste[i+acc] = 1;
            acc++;
        }
        liste[i+acc] = temp1;
        temp0 = temp1;
    }
    printf("%d\n", acc);
    for(unsigned short i = 0; i < n + acc; i++)
        printf("%d ", liste[i]);
    printf("\n");
}
