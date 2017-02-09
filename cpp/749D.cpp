#include <vector>
#include <algorithm>
#include <stdio.h>

int main()
{
    int n, q, a, b, temp, pf, ef;
    scanf("%d", &n);
    std::vector<unsigned> participant, enchere;
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &a, &b);
        participant.push_back(a);
        enchere.push_back(b);
    }
    scanf("%d", &q);
    int nb_absent;
    while(q--){
        std::vector<unsigned> absent;
        scanf("%d", &nb_absent);
        while(nb_absent--) {
            scanf("%d", &temp);
            absent.push_back(temp);
        }
        pf = 0;
        ef = 0;
        for(int i = 0; i < n; i++) {
            if(std::find(absent.begin(), absent.end(), participant[i]) == absent.end() and pf != participant[i]) {
                pf = participant[i];
                ef = enchere[i];
            }
        }
        printf("%d %d\n", pf, ef);
    }
    return 0;
}
