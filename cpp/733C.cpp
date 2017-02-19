#include <vector>
#include <algorithm>
#include <stdio.h>

int main()
{
    int n, temp, m, max, ind;
    scanf("%d", &n);
    std::vector<unsigned long> monsters;
    std::vector<std::vector<unsigned long> > sousmonstre;
    for (int i = 0; i < n; i++) {
        scanf("%d", &temp);
        monsters.push_back(temp);
    }
    scanf("%d", &m);
    ind = 0;
    bool no = false;
    for(int i = 0; i < m; i++) {
        std::vector<unsigned long> SM;
        scanf("%d", &temp);
        int acc = 0, maxx = monsters[ind], minn = maxx, step = 0;
        while(acc < temp and ind < n) {
            step += 1;
            acc += monsters[ind];
            SM.push_back(monsters[ind]);
            maxx = monsters[ind] > maxx ? monsters[ind] : maxx;
            minn = monsters[ind] < minn ? monsters[ind] : minn;
            ind++;
            //printf("%d %d %d\n", minn, maxx, ind);
        }
        if(acc != temp or (minn == maxx and step>1)) {
            no = true;
            break;
        }
        sousmonstre.push_back(SM);
    }
    if(no)
        printf("NO\n");
    else {
        printf("YES\n");
        for(int i = 0; i < sousmonstre.size(); i++)
            if(sousmonstre[i].size() > 1) {
                m = std::distance(sousmonstre[i].begin(), std::max_element(sousmonstre[i].begin(), sousmonstre[i].end()));
                for(int j = 0; j < m; j++)
                    printf("%d L\n", m + i - j + 1);
                for(int j = m + 1; j < sousmonstre[i].size(); j++)
                    printf("%d R\n", m + 2*i);
            }
    }

    return 0;
}
