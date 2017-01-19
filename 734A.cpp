#include<bits/stdc++.h>

int main() {
    unsigned int n, acc = 0;
    char c;
    scanf("%u\n", &n);
    for(unsigned int i = 0; i < n; i++) {
        scanf("%c", &c);
        if(c == 'A')
            acc++;
    }
    //printf("%u\n", acc);
    if(acc > n - acc)
        printf("Anton");
    else if(acc < n - acc)
        printf("Danik");
    else
        printf("Friendship");
}
