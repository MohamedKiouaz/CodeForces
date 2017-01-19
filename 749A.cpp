#include <iostream>

int main()
{
    int n;
    std::cin >> n;
    int k = (n % 2 ? (n - 1) / 2 : n / 2);
    std::cout << k << std::endl;
    for (int i = 0; i < k - n % 2; i++)
        std::cout << 2 << " ";
    if (n % 2)
        std::cout << 3 << std::endl;
}
