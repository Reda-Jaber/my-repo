#include <iostream>
#include <string>

std::string even_or_odd(int number) 
{
  // if (number % 2 == 0)
  //   return "Even";
    
  // return "Odd";
  return number % 2 == 0 ? "Even" : "Odd";
}

int main(){
  
  std::cout << even_or_odd(21) << "\n";
  std::cout << even_or_odd(22) << "\n";

return 0;
}