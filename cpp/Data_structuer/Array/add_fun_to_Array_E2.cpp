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
        cout << "Enter itmes " << i + 1<< " ";
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
  int get_size(){
    return size;
  }
  int get_lenght(){
    return lenght;
  }
  int Search(int key)
  {
    int index = -1;
    for (int i = 0; i < lenght; i ++)
    {
      if (key == items[i])
      {
        index = i;
        break;
      }
    }
    return index;
  }
  
  void append(int newItem){
    if (lenght < size){
      cout << "There is space\n";
      items[lenght] = newItem;
      lenght++;
    }
    else 
    {
      cout << "There is no space\n";
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
  cout << "Search\n";
  int search; cin >> search;
  int index = opj.Search(search);
  if (index == -1)
    cout << "Not Found\n";
  else
    cout << "Found @ Position " << index << "\n";
    
  cout << "Add value to arr\n";
  int add; cin >> add;
  opj.append(add);
  opj.Display();
  
  return 0;
}