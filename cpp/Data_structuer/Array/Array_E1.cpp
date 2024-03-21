#include <iostream>
using namespace std;

class arr{
private:
  int size;
  int lenght;
  int *items;
  
public:
  arr(int arrSize)
  {
    size = arrSize;
    lenght= 0;
    items = new int[arrSize];
  }
  void fill(){
    int numOfItems;
    cout << "How many itmes you want to fill \n";
    cin >> numOfItems;
    if (numOfItems > size)
    {
      cout << "It's Num > Size \n";
      return;
    } else {
      for (int i = 0; i < numOfItems; i ++){
        cout << "Enter itmes " << i + 1<< "\n";
        cin >> items[i];
        lenght ++;
      }
      
    }
  }
  
  void Display(){
    cout << "Display Array Items \n";
    for (int i = 0; i < lenght; i ++)
    {
      cout << "Items " << i + 1 << " = " << items[i] << "\n";
    }
  }
  
};

int main(){
  
  cout << "Hello Data Structuer\n";
  int sizeArr;
  cout << "Enter the arr size ";cin >> sizeArr;
  arr opj(sizeArr);
  opj.fill();
  opj.Display();
  
  return 0;
}