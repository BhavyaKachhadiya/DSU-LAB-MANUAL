#include <iostream>
using namespace std;

class Math {
public:
    static int add(int a, int b) {
        return a + b;
    }
};

int main() {
    int result = Math::add(5, 3);
    cout << "Sum: " << result << endl;
    return 0;
}
