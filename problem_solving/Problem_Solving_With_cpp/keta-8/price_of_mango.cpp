#include <iostream>

int mango(int quantity, int price)
{
  int minus = quantity / 3;
  return (quantity - minus) * price;
}

int main(){
  std:: cout << mango(5, 10) << "\n";
  std:: cout << mango(9, 10) << "\n";
  return 0;
}