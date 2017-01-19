#include <iostream>

int main()
{
    int r1, c1, r2, c2, tour, roi, fou;
    std::cin >> r1 >> c1 >> r2 >> c2;
    tour = (r1 == r2 or c1 == c2) ? 1 : 2;
    if((r1 + c1)%2 == (r2 + c2)%2)
        fou = (r1+c1==r2+c2 or r1-c1 == r2-c2) ? 1 : 2;
    else
        fou = 0;
    roi = std::max(abs(r1-r2), abs(c1-c2));
    std::cout << tour << " " << fou << " " << roi << std::endl;
}
