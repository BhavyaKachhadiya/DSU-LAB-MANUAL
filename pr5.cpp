#include <iostream>
using namespace std;
class Largest {
public:
  Largest(int a, int b, int c) : a(a), b(b), c(c) {}

  int largest() {
    return compare_numbers(a, compare_numbers(b, c));
  }

private:
  int a, b, c;

  int compare_numbers(int x, int y) {
    return x > y ? x : y;
  }
};
int main() {
  Largest largest(10, 20, 30);

  int largest_number = largest.largest();

  cout << "The largest number is: " << largest_number << endl;

  return 0;
}
