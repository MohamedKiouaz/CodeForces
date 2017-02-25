#include <iostream>
#include <algorithm>

int main() {
    int n, c[5] = {0}, test;
	std::cin >> n;
	while(n--) {
		std::cin >> test;
		c[test]++;
	}
	std::cout << c[4] + c[3] + (c[2] * 2 + std::max(c[1] - c[3], 0) + 3) / 4;
}
