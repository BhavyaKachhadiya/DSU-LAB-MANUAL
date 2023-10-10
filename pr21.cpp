#include <iostream>
using namespace std;
class ComplexNumber {
private:
  float real_;
  float imaginary_;

public:
  ComplexNumber(float real, float imaginary) : real_(real), imaginary_(imaginary) {}

  friend ComplexNumber operator+(ComplexNumber& a, ComplexNumber& b) {
    return ComplexNumber(a.real_ + b.real_, a.imaginary_ + b.imaginary_);
  }

  float get_real() const { return real_; }
  float get_imaginary() const { return imaginary_; }
};
int main()
{
ComplexNumber a(1, 2);
ComplexNumber b(3, 4);

ComplexNumber c = a + b;

cout << c.get_real() << " + " << c.get_imaginary() << "i" << endl;
}