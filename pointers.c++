#include <iostream>
#include <stdio.h>
#include <malloc.h>
using namespace std;
int main()
{
   int x = 5;
    int* ptr = &x;
    cout << "Value of x: " << x << endl;
    cout << "Address of x: " << ptr << endl;
    cout << "Value at address ptr: " << *ptr << endl;
    return 0;

    //allocating heap memory using malloc
    int* heapPtr = (int*)malloc(sizeof(int));
    printf("Value at heap address: %d\n", *heapPtr);
    *heapPtr = 10;
    printf("Value at heap address: %d\n", *heapPtr);
    free(heapPtr); // Don't forget to free the allocated memory
    return 0;

    //declaring a pointer at heap using new operator
    int* newPtr = new int;
    *newPtr = 20;
    printf("Value at new address: %d\n", *newPtr);
    delete newPtr; // Don't forget to delete the allocated memory
    return 0;

    //reallocating heap memory using realloc
    int* reallocPtr = (int*)malloc(sizeof(int));
    *reallocPtr = 30;
    reallocPtr = (int*)realloc(reallocPtr, sizeof(int) * 2);
    reallocPtr[1] = 40;
    printf("Value at realloc address: %d\n", reallocPtr[0]);
    printf("Value at realloc address: %d\n", reallocPtr[1]);
    free(reallocPtr); // Don't forget to free the allocated memory
    return 0;

    int A[10]={1,2,3,4,5,6,7,8,9,10};
    int *ptr=A;
    printf("Value at ptr address: %d\n", *ptr);
    printf("Address of ptr: %p\n", (void*)ptr);
    for (int i=0;i<10;i++)
    {
        cout<<ptr[i]<<endl;
    }
    return 0;
}