Functions
Aim
To demonstrate the use of pointers in C++ by swapping the values of two variables using a function.

Theory
Pointers are variables that store the memory address of another variable. By using pointers, we can directly manipulate the values stored in memory. This is particularly useful for functions that need to modify the actual values of arguments passed to them.

Algorithm
Define a function swap that takes two integer pointers as parameters.
Inside the function, declare a temporary integer variable temp.
Assign the value pointed to by the first pointer to temp.
Assign the value pointed to by the second pointer to the location pointed to by the first pointer.
Assign the value stored in temp to the location pointed to by the second pointer.
In the main function, declare two integer variables a and b and initialize them.
Call the swap function, passing the addresses of a and b.
Print the swapped values of a and b.
#include <iostream>
using namespace std;

void swap(int *x, int *y) {
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int a = 5, b = 2;
    swap(&a, &b);
    cout << "value of a: " << a << endl;
    cout << "value of b: " << b << endl;
    return 0;
}
