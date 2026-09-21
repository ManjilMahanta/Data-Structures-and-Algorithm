#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

struct Rectangle 
{ 
    int length; 
    int width; 
}; 

struct student
{ char name[50]; 
  int age; 
  float marks; 
};

int main() 
{ 
    Rectangle rect; 

    rect.length = 10; 
    rect.width = 5; 

    int area = rect.length * rect.width; 

    cout << "Area of the rectangle: " << area << endl;

    printf("The area of the rectangle is: %d\n", area);



    student s1;
    std::strcpy(s1.name, "John Doe");
    s1.age = 20;
    s1.marks = 85.5;

    cout<<"Student's Name: "<<s1.name<<"Student's Age: "<<s1.age<<"Student's Marks: "<<s1.marks<<endl;
}


