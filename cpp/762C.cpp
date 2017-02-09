#include<bits/stdc++.h>

bool isSubsequence(const std::string &s, const std::string &t) {
    int j;
    for(int i = 0; i < s.size(); i++) {
        j = 0;
        if()
    }
}

int main() {
    std::string a, b, c = "", d;
    bool liste[100000] = {false};

    std::cin >> a >> b;

    for(unsigned i = 0; i < b.size(); i++)
        for(unsigned j = 0; j < a.size(); j++)
            if(b[i] == a[j])
                if(liste[j] == true)
                    break;
                else
                    liste[j] = true;
    for(unsigned i = 0; i < a.size(); i++)
        if(liste[i] == true)
            c.push_back(a[i]);

    for(unsigned gauche = 0; gauche < b.size() - 1; gauche++)
        for(unsigned droite = gauche + 1; droite < b.size() - 1; droite++) {
            if(droite - gauche > c.size())
                break;
            if(isSubsequence(c, b.substr(gauche, droite)) < c.size())
                d = b.substr(gauche, droite);
            //std::cout << gauche << " " << droite << "\n";
        }

    std::cout << d << "\n";
}
