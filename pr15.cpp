#include <iostream>
using namespace std;
inline int cube(int n)
{
    return n*n*n;
}
int main()
{
    int ans=cube(5);
    cout << ans<<endl;
}