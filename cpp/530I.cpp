#include <iostream>

int main() {
    unsigned n, k, m;
	std::cin >> n >> k;
	unsigned list[10] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
	unsigned con[10];
    for(int i = 0; i < k; i++) {
        std::cin >> m;
        for(int j = 0; j < m; j++) {
            std::cin >> con[j];
            con[j]--;
        }
        for(int j = 0; j < m; j++)
            for(int l = j + 1; l < m; l++)
                if(list[con[j]] == list[con[l]])
                    list[con[l]]++;
    }
    for(int i = 0; i < n; i++)
        std::cout << list[i] << " ";
}
