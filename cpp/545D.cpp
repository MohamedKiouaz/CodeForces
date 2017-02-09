#include <stdio.h>
#include <vector>
#include <algorithm>

int main()
{
    using namespace std;
    int n, temp,acc=0,nb=0;
    scanf("%d", &n);
    vector<int> queue;
    for (int i = 0; i < n; i++) {
        scanf("%d", &temp);
        queue.push_back(temp);
    }
    sort(queue.begin(),queue.end());
    for(int i=0;i<n;i++)
    {
        if(queue[i]>=acc)
        {
            acc+=queue[i];
            nb++;
        }
    }
    printf("%d\n",nb);
    return 0;
}
