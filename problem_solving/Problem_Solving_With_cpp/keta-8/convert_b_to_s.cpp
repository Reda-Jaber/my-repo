#include <iostream>
#include <string>

std::string boolean_to_string(bool b){
  return b ? "true" : "false";
}

int main(){
  std::cout << boolean_to_string(true);
  std::cout << boolean_to_string(false);
  return 0;
}