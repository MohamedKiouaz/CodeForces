#include <stdio.h>

int main()
{
    int n, temp;
    double acc = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &temp);
        acc += temp;
    }
    printf("%f", acc/n);
    return 0;
}
