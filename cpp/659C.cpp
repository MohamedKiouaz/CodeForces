#include <stdio.h>
#include <vector>
#include <algorithm>
#include <math.h>

int main()
{
    using namespace std;
    int n, temp, acc;

    scanf("%d", &n);
    scanf("%d", &acc);

    int queue[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &temp);
        queue[i]=temp;
    }

    sort(queue,&queue[n]);

    int i = 1, j = 0, k = 0, outp[(int) sqrt(acc*2)+1];
    while(acc > 0 and acc >= i){
        if(j >= n or queue[j] != i) {
            outp[k]=i;
            k++;
            acc -= i;
        }
        else
            j++;
        i++;
    }
    printf("%d\n", k);

    for(int i = 0; i < k; i++)
        printf("%d ",outp[i]);
    printf("\n");

    return 0;
}
