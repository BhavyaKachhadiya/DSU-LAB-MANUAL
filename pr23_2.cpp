#include <iostream>
using namespace std;
class Vehicle
{
    public:
    Vehicle(){
        cout << "This is a Vehicle" << endl;
    };
        
};

class Fuel : public Vehicle
{
    public:
    Fuel(){
        cout << "This is a Fuel" << endl;
    };
};

class Electric : public Vehicle
{
    public:
    Electric(){
        cout << "This is a Electric" << endl;
    };
};

class Hybrid : public Fuel, public Electric{
    public:
    Hybrid(){
        cout << "This is a Hybrid" << endl;
    }; 
};
int main()
{
    Hybrid h;
}