#include <iostream>
using namespace std;

string removeExclamationMarks(string str){
  string s = "";
  for (int i = 0; i < str.length(); i ++){
    if (str[i] != '!'){
      s += str[i];
    }
  }
  return s;
}
int main(){
  cout << removeExclamationMarks("!!!Hello!!");
  

  
  return 0;
}