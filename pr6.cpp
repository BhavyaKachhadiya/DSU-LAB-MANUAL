#include <iostream>
#include <iomanip>
using namespace std;
class Student
{
    private:
        string name;
        int gpa;
    public:
        void getdata()
        {
            cout<<"Name :: ";
            cin>>name;
            cout<<"GPA :: ";
            cin>>gpa;
        }
        void putdata()
        {
            cout << left << setw(15) << "Name:" << setw(10) << name << endl;
        cout << left << setw(15) << "GPA:" << fixed << setprecision(2) << setw(10) << gpa << endl;
        }
        
};
int main()
{
    Student s;
    s.getdata();
    s.putdata();
}