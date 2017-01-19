#include <stdio.h>
#include <vector>

int main()
{
    using namespace std;
    int n, temp, acc, max = 0;
    scanf("%d", &n);
    short queue[200000];
    for (int i = 0; i < n; i++) {
        scanf("%d", &temp);
        queue[i]=temp;
    }
    for(int i = 1; i < n/3+1; i++)
        if(n%i == 0)
            for(int j = 0; j < i; j++) {
                acc = 0;
                for(int k = j; k < n; k += i)
                    acc += queue[k];
                max = i == 1 ? acc : max;
                max = acc > max ? acc : max;
            }
    printf("%d\n", max);
}
