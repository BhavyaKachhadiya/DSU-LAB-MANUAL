#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  float fahrenheit;

  cout << "Enter the temperature in Fahrenheit: ";
  cin >> fahrenheit;

  float celsius = (fahrenheit - 32) * 5 / 9;

  cout << setprecision(2) << fixed;
  cout << "The temperature in Celsius is: " << celsius << endl;
  return 0;
}
