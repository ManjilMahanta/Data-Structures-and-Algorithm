 /*Datatypes:
 1. Primitive Datatypes are the datatypes that are built into the programming language and cannot be broken down into simpler components. Examples include int, float, double, char, and bool.
 That includes int, float, double, char, and bool.
 2. User Defined Datatypes are the datatypes that are defined by the user to create complex data structures. Examples include structures, classes, and enumerations.*/
 //Example program to demonstrate the use of primitive datatypes and user-defined datatypes in C++.
#include <iostream> // Including the input-output stream library for using cout and cin
#include <string> // Including the string library for using the string class
using namespace std; // Using the standard namespace to avoid prefixing std:: before standard functions and objects
// Defining a structure named 'Person' to represent a person's information
struct Person {
    string name; // Member variable to store the person's name
    int age; // Member variable to store the person's age
    float height; // Member variable to store the person's height
};
int main() {
    int age; // Declaration of an integer variable 'age'
    float height; // Declaration of a float variable 'height'
    double weight; // Declaration of a double variable 'weight'
    char grade; // Declaration of a char variable 'grade'
    bool isStudent; // Declaration of a boolean variable 'isStudent'

    // Taking input from the user for each variable
    cout << "Enter your age: "; 
    cin >> age; // Reading an integer value for age
    cout << "Enter your height in meters: "; 
    cin >> height; // Reading a float value for height
    cout << "Enter your weight in kilograms: "; 
    cin >> weight; // Reading a double value for weight
    cout << "Enter your grade (A, B, C, D, F): "; 
    cin >> grade; // Reading a character value for grade
    cout << "Are you a student? (1 for Yes, 0 for No): "; 
    cin >> isStudent; // Reading a boolean value for isStudent

    // Displaying the values entered by the user
    cout << "\nYou entered:\n";
    cout << "Age: " << age << endl; // Printing the age
    cout << "Height: " << height << " meters" << endl; // Printing the height
    cout << "Weight: " << weight << " kilograms" << endl; // Printing the weight
    cout << "Grade: " << grade << endl; // Printing the grade
    cout << "Is Student: " << (isStudent ? "Yes" : "No") << endl; // Printing whether the user is a student or not
     Person person; // Creating an instance of the 'Person' structure

    // Taking input from the user for each member of the structure
    cout << "Enter your name: "; 
    cin >> person.name; // Reading a string value for name
    cout << "Enter your age: "; 
    cin >> person.age; // Reading an integer value for age
    cout << "Enter your height in meters: "; 
    cin >> person.height; // Reading a float value for height

    // Displaying the values entered by the user
    cout << "\nYou entered:\n";
    cout << "Name: " << person.name << endl; // Printing the name
    cout << "Age: " << person.age << endl; // Printing the age
    cout << "Height: " << person.height << " meters" << endl; // Printing the height
    printf("Size of Person structure: %zu bytes\n", sizeof(person)); // Printing the size of the 'Person' structure in bytes
    return 0; // Indicating that the program ended successfully
}
