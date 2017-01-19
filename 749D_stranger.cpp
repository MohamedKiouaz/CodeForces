#include <iostream>
#include <vector>
#include <unordered_set>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<vector<int> > x(n);
    for (int i = 0; i < n; i++) {
        static int a, b;
        cin >> a >> b;
        x[a - 1].push_back(b);
    }
    vector<int> list;
    for (int i = 0; i < n; i++)
        if (!x[i].empty())
            list.push_back(i);
    sort(list.begin(), list.end(), [&](int a, int b) -> bool {
        return x[a].back() < x[b].back();
    });
    int Q;
    cin >> Q;
    while (Q--) {
        int k;
        unordered_set<int> s;
        cin >> k;
        for (int i = 0; i < k; i++) {
            static int tmp;
            cin >> tmp;
            s.insert(tmp - 1);
        }
        int i = list.size() - 1;
        while (i >= 0 && s.count(list[i]))
            i--;
        if (i < 0) {
            cout << "0 0\n";
            continue;
        }
        int win = list[i];
        i--;
        while (i >= 0 && s.count(list[i]))
            i--;
        int num;
        if (i < 0)
            num = x[win].front();
        else
            num = *lower_bound(x[win].begin(), x[win].end(), x[list[i]].back());
        printf("%d %d\n", win + 1, num);
    }
    return 0;
}
