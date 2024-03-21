#include <iostream>
using namespace std;

class master {
private:
  string name;
  string gmail;
  string Specialty;

public:
  void set_name(string n){name = n;}
  void set_gmail(string g){gmail = g;}
  void set_Specialty(string spe){Specialty = spe;}
  string get_name(){return name;}
  string get_gmail(){return gmail;}
  string get_Specialty(){return Specialty;}
  master(): name("onknown"), gmail("onknown"), Specialty("onknown") {};
  master(string n, string g, string spe)
  {
  name = n;
  gmail = g;
  Specialty = spe; 
  };
  void print(){
    cout << "Name: " << name << endl;
    cout << "Gmail: " << gmail << endl;
    cout << "Specialty: " << Specialty << endl;
  }
};

class Employees : public master {
private:
  float salary;
  int ID_num;
  float total_salary;
  float overtime_hours;
  float overtime_rate;
public:
  void set_salary(float s){salary = s;}
  void set_Id_num(int id){ID_num = id;}
  void set_overtime_hours(float o_hours){overtime_hours = o_hours;}
  float get_salary(){return salary;}
  float get_ID_num(){return ID_num;}
  float get_overtime_hours(){return overtime_hours;}
  Employees() :salary(0), ID_num(0), overtime_hours(0) {};
  Employees(string n, string g, string spe, float s, int id, float o_hours)
  :master(n, g, spe) 
  {
    salary = s;
    ID_num = id;
    overtime_hours = o_hours;
  }
  void print() 
  {
    master::print();
    cout << "ID Number: " << ID_num << endl;
    cout << "Salary: " << salary << endl;
    int result = 20;
    cout << "Overtime pay: " << overtime_hours * result << endl;
    cout << "Total Salary: " << salary + (overtime_hours * result)<< endl;
  }
};

class student : public master {
private:
  int level;
  float GPA;
  int id_stu;
public:
  void set_level(int l){level = l;}
  void set_GPA(float gpa){GPA = gpa;}
  void set_id_stu(int st){id_stu = st;}
  int get_level(){return level;}
  float get_GPA(){return GPA;}
  int get_id_stu(){return id_stu;}
  student() : level(0), GPA(0), id_stu(0) {};
  student(string n, string g, string spe, int l, float gpa, int i_stu)
  :master(n, g, spe) 
  {
    level = l;
    GPA = gpa;
    id_stu = i_stu;
  }
  void print(){
    master::print();
    cout << "Level: " << level << endl;
    cout << "GPA: " << GPA << endl;
    cout << "ID: " << id_stu << endl;
  }
};

int main() {
  Employees emp1("Mohamed", "mohamed.mail2020@gmail.com", "MIS", 3000, 24, 5);
  emp1.print();
  cout << "===================================\n";
  Employees emp2;
  emp2.set_name("Mohamed");
  emp2.set_gmail("mohamed.mail2020@gmail.com");
  emp2.set_Specialty("MIS");
  emp2.set_Id_num(24);
  emp2.set_salary(3000);
  emp2.set_overtime_hours(5);
  emp2.print();
  cout << "===================================\n\n";
  cout << "===================================\n";
  
  student stu1("Reda", "reda.mail2020@gmail.com", "BIS", 2, 3.67, 19040);
  stu1.print();
  cout << "===================================\n";
  student stu2;
  stu2.set_name("Reda");
  stu2.set_gmail("reda.mail2020@gmail.com");
  stu2.set_Specialty("BIS");
  stu2.set_id_stu(19040);
  stu2.set_GPA(3.67);
  stu2.set_level(2);
  stu2.print();
  
  return 0;
}