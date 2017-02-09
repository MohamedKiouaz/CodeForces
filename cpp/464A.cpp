#include <iostream>
#include <string>

bool palindrome(std::string s, int begin, int end)
{
    if (end - begin < 2)
        return true;
    int i = 0;
    while (i < (end - begin) / 2) {
        if (s[i + begin] != s[end - i])
            return false;
        i++;
    }
    return true;
}

bool check(std::string s)
{
    int taille = 2;
    while (taille < s.size()) {
        int a = 0;
        while (a < s.size() - taille) {
            if (palindrome(s, a, a + taille)) {
                return false;
            }
            a++;
        }
        taille++;
    }
    return true;
}

std::string sum(std::string s, int p)
{
    for (int i = s.size() - 1; i > -1; i--) {
        s[i]++;
    }
}

int main()
{
    int n, p;
    std::string s, pp;
    std::cin >> n >> p >> s;
    for (int i = 0; i < n; i++)
        pp += char(p + int('a'));
    while (not check(s) and s != pp) {
        s += 1;
        std::cout << s << std::endl;
    }
}
