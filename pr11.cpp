#include <iostream>
using namespace std;

class Person {
public:
  Person(const string& name, int age) : name_(name), age_(age) {}

  string get_name() const { return name_; }
  int get_age() const { return age_; }

private:
  string name_;
  int age_;
};

void print_person(Person person) {
  cout << "Name: " << person.get_name() << ", Age: " << person.get_age() << endl;
}

int main() {
  Person p1("Alice", 25);
  Person p2("Bob", 30);

  // Pass objects as arguments to the print_person() function.
  print_person(p1);
  print_person(p2);

  return 0;
}
