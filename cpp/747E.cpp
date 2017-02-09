#include <iostream>
#include <queue>
#include <vector>
#include <string>

using namespace std;

void MyFunc(vector<queue<string> >& com, unsigned n, unsigned k)
{
    string s;
    if (n + 1 > com.size()) {
        queue<string> k;
        com.push_back(k);
    }
    for (unsigned i = 0; i < k; i++) {
        getline(cin, s, ',');
        //cout << s << endl;
        if (!s.empty()) {
            com[n].push(s);
            getline(cin, s, ',');
            MyFunc(com, n + 1, stoi(s));
        }
        else
            break;
    }
}

int main()
{
    vector<queue<string> > com;
    while (cin.peek() != EOF)
        MyFunc(com, 0, 1);
    cout << com.size() - 1 << endl;
    for (unsigned i = 0; i < com.size() - 1; i++) {
        while (!com[i].empty()) {
            cout << com[i].front() << " ";
            com[i].pop();
        }
        cout << endl;
    }
}
