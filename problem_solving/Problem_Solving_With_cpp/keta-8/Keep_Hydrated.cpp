#include <iostream>

int litres(double time) {
  return time * .5;
}

int main() {
  std:: cout << litres(11.8) << "\n";
  std:: cout << litres(5.5) << "\n";
  return 0;
}