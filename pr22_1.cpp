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
class B : public A{};
int main()
{
    B b;
}