#include<bits/stdc++.h>

unsigned short liste[50];

int main() {
    unsigned short n, temp1, temp2, nb;
    scanf("%hu", &n);
    nb = n * (n - 1) / 2 - 1;
    for(unsigned short i = 0; i < nb; i++) {
        scanf("%hu %hu", &temp1, &temp2);
        liste[temp1 - 1]++;
        liste[temp2 - 1]++;
    }
    for(int i = n - 1; i >= 0; i--)
        if(liste[i] < n - 1)
            printf("%d ", i + 1);
    printf("\n");
}
