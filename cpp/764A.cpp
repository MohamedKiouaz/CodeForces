#include<bits/stdc++.h>

int main()
{
    int n, m, z;
    std::cin >> n >> m >> z;
    std::cout << z/(n*m)/std::__gcd(n,m);
}