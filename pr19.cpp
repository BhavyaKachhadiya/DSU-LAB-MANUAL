#include <iostream>
using namespace std;
class Rectangle
{
    int l,b;
    public:
        Rectangle(int len,int bre)
        {
            l=len;
            b=bre;
            
        }  
        Rectangle(Rectangle &r)
        {
            l=r.l;
            b=r.b;
            cout << "Area of Rectangle :: "<<l*b;
        }      
};
int main()
{
    Rectangle r1(4,6),r2(r1);
}