/*how to write comments?In C and C++, comments can be written in two ways:
1. Single-line comments: These comments start with two forward slashes (//) and continue until the end of the line. They are used for brief explanations or notes.
2. Multi-line comments: These comments start with a forward slash followed by an asterisk (/*) and end with an asterisk followed by a forward slash . They can span multiple lines and are used for longer explanations or documentation.
*/

//Arrays Basic
//Arrays are used to store multiple values of the same type in a single variable. They are useful for organizing data and performing operations on collections of values. In C and C++, arrays can be declared with a specific size, and their elements can be accessed using indices starting from 0.
int A[5]; // Declaration of an integer array 'A' with 5 elements
#include <stdio.h> // Including the standard input-output library for using printf function
int main() {
    // Initializing the array with values
    A[0] = 10; // Assigning value 10 to the first element
    A[1] = 20; // Assigning value 20 to the second element
    A[2] = 30; // Assigning value 30 to the third element
    A[3] = 40; // Assigning value 40 to the fourth element
    A[4] = 50; // Assigning value 50 to the fifth element
    int B[5] = {1, 2, 3, 4, 5}; // Declaration and initialization of another integer array 'B' with 5 elements
    printf("Elements of array A:\n"); // Printing a message to indicate the start of array A element
    // Accessing and printing the elements of the array
    for (int i = 0; i < 5; i++) {
        printf("Element at index %d: %d\n", i, A[i]); // Printing each element of the array
    }
    printf("Elements of array B:\n"); // Printing a message to indicate the start of array B element
    for (int i = 0; i < 5; i++) {
        printf("Element at index %d: %d\n", i, B[i]); // Printing each element of the array
    }

    printf("Size of array A: %zu bytes\n", sizeof(A)); // Printing the size of array A in bytes

    return 0; // Indicating that the program ended successfully
}

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int C[n];
    for (int i = 0; i < n; i++) {
        printf("Enter element at index %d: ", i);
        scanf("%d", &C[i]);
    }
    printf("Elements of array C:\n");
    for (int i = 0; i < n; i++) {
        printf("Element at index %d: %d\n", i, C[i]);
    }
    return 0; // Returning 0 indicates that the program has executed successfully
}
