#include<iostream>
using namespace std;
int main()
{
    int x=10;
    int &r=x;
    x++;
    cout<<x<<endl;
    r++;
    cout<<x<<endl;
    cout<<r<<endl;
    return 0;

}