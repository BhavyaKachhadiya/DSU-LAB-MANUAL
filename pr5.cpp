#include <iostream>
using namespace std;

class Max {
private:
    int num1, num2, num3;

public:
    void getdata() {
        cout << "Enter three numbers: ";
        cin >> num1 >> num2 >> num3;
    }

    int findLargest() {
        return (num1 > num2) ? ((num1 > num3) ? num1 : num3) : ((num2 > num3) ? num2 : num3);
    }

    void putdata() {
        cout << "The largest number is: " << findLargest() << endl;
    }
};

int main() {
    Max m;
    
    m.getdata();
    m.putdata();

    return 0;
}
