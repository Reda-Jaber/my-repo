#include <iostream>
#include <vector>
using namespace std;

int min(vector<int> list){
  int min = list[0];
  for (int i = 0; i < list.size(); i++)
    if (list[i] < min)
      min = list[i];  

    return min;
}

int max(vector<int> list){
  int max = list[0];
  for (int i = 0; i < list.size(); i++)
    if (list[i] > max)
      max = list[i];  

    return max;
}

int main(){
  std:: cout << min({-3,3,4,5}) << "\n";
  std:: cout << max({-3,3,4,5}) << "\n";
  return 0;
}