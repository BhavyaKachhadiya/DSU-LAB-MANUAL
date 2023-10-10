#include <iostream>
#include <cmath>

using namespace std;

float volume(float side) {
  // Volume of a cube
  return side * side * side;
}

float volume(float radius, float height) {
  // Volume of a cylinder
  return 3.14 * radius * radius * height;
}

float volume(float length, float breadth, float height) {
  // Volume of a rectangular box
  return length * breadth * height;
}

int main() {
  float side, radius, height, length, breadth;

  cout << "Enter the side of the cube: ";
  cin >> side;

  cout << "Enter the radius and height of the cylinder: ";
  cin >> radius >> height;

  cout << "Enter the length, breadth and height of the rectangular box: ";
  cin >> length >> breadth >> height;

  cout << "Volume of the cube: " << volume(side) << endl;
  cout << "Volume of the cylinder: " << volume(radius, height) << endl;
  cout << "Volume of the rectangular box: " << volume(length, breadth, height) << endl;

  return 0;
}
