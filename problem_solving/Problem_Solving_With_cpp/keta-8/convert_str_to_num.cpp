#include <iostream>
#include <string>
int string_to_number(const std::string& s) {
  return stoi(s);
}

int main() {
  std:: cout << string_to_number("1234");
  return 0;
}