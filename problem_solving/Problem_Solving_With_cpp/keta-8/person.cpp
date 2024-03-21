#include <iostream>
#include <string>
using namespace std;

class emp {
private:
  string name;
  string gender;
  int age;
  
public:
  void set_name(string n){
    name = n;
  }
  string get_name(){
    return name;
  }
  void set_gender(string g){
    gender = g;
  }
  string get_gender(){
    return gender;
  }
  void set_age(int a){
    age = a;
  }
  int get_age(){
    return age;
  }
  emp(string n, string g, int a){
    name = n;
    gender = g;
    age = a;
  }
  void print(){
    cout << "Name is " << name << "\n";
    cout << "Gender is " << gender << "\n";
    cout << "Age is " << age << "\n";
  }
};

class empp :public emp {
private:
  string job;
  float salary;
  
public:
  void set_job(string j){
    job = j;
  }
  string get_job(){
    return job;
  }
  void set_salary(float s){
    salary = s;
  }
  float get_salary(){
    return salary;
  }
  empp(string n, string g, int a, string j, float s) :emp(n, g, a) {
    job = j;
    salary = s;
  }
  void print(){
    emp::print();
    cout << "Job is "<< job << "\n";
    cout << "Salary is " << salary << "\n";
  }
};

class student :public emp {
private:
  int level;
  float GPA;
public:
  void set_level(int l){
    level = l;
  }
  int get_level(){
    return level;
  }
  void set_GPA(float gp){
    GPA = gp;
  }
  float get_GPA(){
    return GPA;
  }
  student(string n, string g, int a, int l, float gp) : emp(n, g, a){
    level = l;
    GPA = gp;
  }
  void print(){
    emp::print();
    cout << "Level is " << level << "\n";
    cout << "GPA is " << GPA << "\n";
  }
};

int main(){

  empp mr1("Mohamed", "Male", 31, "Instructer", 1000);
  mr1.print();
  cout << "=====================\n";
  student st1("Reda", "Male", 20, 2, 3.45);
  st1.print();

  return 0;
}