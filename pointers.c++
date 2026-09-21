#include <iostream>
using namespace std;
int main()
{
    int x = 5;
    int* ptr = &x;
    cout << "Value of x: " << x << endl;
    cout << "Address of x: " << ptr << endl;
    cout << "Value at address ptr: " << *ptr << endl;
    return 0;
}