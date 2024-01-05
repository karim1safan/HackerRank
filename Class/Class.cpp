#include <iostream>
#include<cstring>
using namespace std;

class Person{

private:
  int age;
  string first_name;
  string second_name;
  int standard;
public:
  void setAge(int a){
    age = a;
  }
  void setFirstName(string fname){
    first_name = fname;
  }
  void setSecondName(string sname){
    second_name = sname;
  }
  void setStandar(int s){
    standard = s;
  }
  int getAge(){
    return age;
  }
  string getFirstName(){
    return first_name;
  }
  string getSecondName(){
    return second_name;
  }
  int getStandar(){
    return standard;
  }
  void to_string(){
    cout<<age;
    cout<<",";
    cout<<first_name;
    cout<<",";
    cout<<second_name;
    cout<<",";
    cout<<standard;
  }

};


int main()
{
  Person p;

  int age, standard;
  string first_name, second_name;

  cin >> age >> first_name >> second_name >> standard;

  p.setAge(age);
  p.setFirstName(first_name);
  p.setSecondName(second_name);
  p.setStandar(standard);

  cout << p.getAge() << "\n";
  cout << p.getSecondName() << ", " << p.getFirstName() << "\n";
  cout << p.getStandar() << "\n";
  cout << "\n";
  p.to_string();

  return 0;
}
// Problem Link: https://www.hackerrank.com/challenges/c-tutorial-class/problem?isFullScreen=true
