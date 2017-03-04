#include <iostream>

int main() {
  unsigned n, acc = 0, pi, qi;
  std::cin >> n;
  for(unsigned i = 0; i < n; i++) {
    std::cin >> pi >> qi;
    //std::cout << pi << qi << "\n";
    if(qi - pi > 1)
      acc++;
  }
  std::cout << acc << "\n";
}
