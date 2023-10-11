#include <iostream>
using namespace std;
int Volume(int n)
{
    return n*n*n;
}
float Volume(float r,float h)
{
    return 3.14*r*r*h;
}
float Volume(float l,float h,float w)
{
    return l*h*w;
}
int main()
{
   int cube= Volume(3);
   float cylinder= Volume(3.4,2.4);
   float rectangle= Volume(3.4,3.4,2.4);

   cout<<"Cube: "<<cube<<endl;
   cout<<"cylinder: "<<cylinder<<endl;
   cout<<"rectangle: "<<rectangle<<endl;
}
