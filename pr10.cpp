#include <iostream>

using namespace std;

class Employee {
private:
    int emp_id;
    string emp_name;

public:
    void getdata() {
        cout << "Enter Employee ID: ";
        cin >> emp_id;
        cin.ignore(); 
        cout << "Enter Employee Name: ";
        getline(cin, emp_name);
    }

    void putdata() {
        cout << "ID: " << emp_id << endl;
        cout << "Name: " << emp_name << endl;
    }
};

int main() {
    Employee e[10];

    cout << "Enter details for " << 10 << " employees:" << endl;
    for (int i = 0; i < 10; i++) {\
        e[i].getdata();
    }

    cout << "\nDetails of " << 10 << " employees:" << endl;
    for (int i = 0; i < 10; i++) {
        e[i].putdata();
        cout << endl;
    }
    return 0;
}
