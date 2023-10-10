#include <iostream>
using namespace std;
class Simple
{
    private:
        int a;
        friend void getdata(Simple &s);
    public:
        void putdata()
        {
            cout<<"A = "<<a;
        }
};
void getdata(Simple &s)
{
    s.a=10;
}
int main()
{
    Simple s;
    getdata(s);
    s.putdata();
cout <<endl<< "This code was created by Bhavya Kachhadiya." << endl;
cout << "Erollment number: 220130318020" << endl;
}