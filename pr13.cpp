#include <iostream>

using namespace std;

class B;

class A {
private:
  int x;
  friend void swap(A &, B &);
public:
  A(int x) : x(x) {}
};

class B {
private:
  int y;
  friend void swap(A &, B &);
public:
  B(int y) : y(y) {}
};

void swap(A &a, B &b) {
  int temp = a.x;
  a.x = b.y;
  b.y = temp;
  
  cout << "a.x = " << a.x << endl;
  cout << "b.y = " << b.y << endl;
}

int main() {
  A a(10);
  B b(20);

  swap(a, b);

  return 0;
}
