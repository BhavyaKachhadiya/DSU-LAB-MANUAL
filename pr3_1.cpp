#include <iostream>
using namespace std;

int m =1;
int main()
{
    int m= 2;

    cout << "The Value of Local Variables :: " <<m<<endl;
    cout << "The Value of g scope resolution operator  :: " <<::m<<endl;
  
    return 0;
}