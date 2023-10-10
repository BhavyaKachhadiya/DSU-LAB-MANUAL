#include <iostream>
using namespace std;
class Rectangle
{
    private:
        int len,bre;
    public:
        Rectangle()
        {
            cout << "Enter Length :: ";
            cin >>len;
            cout << "Enter Breath :: ";
            cin >>bre;
            cout << "Area of Rectangle :: "<<len*bre;
        }
        ~Rectangle(){}
        
};
int main()
{
Rectangle r;
}