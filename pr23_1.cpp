#include <iostream>
using namespace std;
class Animal
{
    public:
    Animal(){
        cout<<"This a Animal!"<<endl;
    }
};
class Cow: public Animal
{
    public:
    Cow(){
        cout<<"This a Animal! and Cow"<<endl;
    }
};

class Tiger: public Animal
{
    public:
    Tiger(){
        cout<<"This a Animal! and Tiger"<<endl;
    }
};

int main()
{
    Cow c;
    Tiger t;
}