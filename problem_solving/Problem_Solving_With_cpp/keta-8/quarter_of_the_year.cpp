#include <iostream>

int quarter_of(int month){
  if (month < 4)
    return 1;
  else if (month < 7)
    return 2;
  else if (month < 10)
    return 3;
  else 
    return 4;
}

int main(){
  std:: cout << quarter_of(3) << "\n";
  std:: cout << quarter_of(5) << "\n";
  std:: cout << quarter_of(7) << "\n";
  std:: cout << quarter_of(11) << "\n";
  return 0;
}