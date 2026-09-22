#include<iostream>
using namespace std;

struct rectangle
{
    int lenght;
    int breadth;

};

int main()
{
    rectangle r={10,5};
    rectangle *p=&r;
    cout<<p<<endl;
    cout<<p->lenght<<endl;
    cout<<p->breadth<<endl;
    cout<<(*p).lenght<<endl;

    //allocating memory for structure using malloc
    struct rectangle *s;
    s=(struct rectangle*)malloc(sizeof(struct rectangle));
    s->lenght=20;
    cout<<s->lenght<<endl;

}