#include <stdio.h>
#include <vector>
#include <math.h>

unsigned short x[2000];
unsigned short y[2000];

inline float distance(unsigned short x1, unsigned short y1, unsigned short x2 = 0, unsigned short y2 = 0) {
    return sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2));
}

int main()
{
    using namespace std;

    unsigned short n, m;
    unsigned short barx = 0, bary = 0;

    scanf("%d %d", &n, &m);
    for (int i = 0; i < n + m; i++) {
        scanf("%d %d", &x[i], &y[i]);
        barx += x[i];
        bary += y[i];
    }

    barx /= n + m;
    bary /= n + m;

    unsigned short nbb, maxreddist;
    for(int i = 0; i < n; i++)
        maxreddist = distance(x[i], y[i], barx, bary) > maxreddist ? distance(x[i], y[i], barx, bary) : maxreddist;
    for(int i = n; i < n + m; i++)
        nbb = distance(x[i], y[i], barx, bary) > maxreddist ? nbb + 1 : nbb;

    if(nbb <= 1) {
        printf("-1\n")
        return 0;
    }

    //for(int i = 0; i < n; i++) printf("Red : %d %d\n", x[i], y[i]);
    //for(int i = n; i < n + m; i++) printf("Blue : %d %d\n", x[i], y[i]);
}
