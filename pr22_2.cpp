#include <iostream>
using namespace std;
class A
{        
    public:
    A()
        {
            cout << "This is a Coming from Class A"<<endl;
        }
        
};
class B: public A
{
    public:
    B()
        {
            cout << "This is a Coming from Class B"<<endl;
        }

};
class C: public B{};
int main()
{
    C c;
}