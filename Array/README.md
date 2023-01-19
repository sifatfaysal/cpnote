Here is a basic program that demonstrates how to use an array in C:

    #include <stdio.h>
    
    int main() {
        int i;
        int myArray[5] = {1, 2, 3, 4, 5};
        printf("The first element of the array is: %d\n", myArray[0]);
        printf("The second element of the array is: %d\n", myArray[1]);
        printf("The third element of the array is: %d\n", myArray[2]);
        printf("The fourth element of the array is: %d\n", myArray[3]);
        printf("The fifth element of the array is: %d\n", myArray[4]);
        return 0;
    }

In this example, we first declare an integer variable `i` and an integer array `myArray` of size 5. We then assign values to each element of the array using the syntax `myArray[i] = value`, where `i` is the index of the element (starting from 0) and `value` is the value we want to assign.

In the main function we are printing the first 5 elements of the array using `printf`. The `%d` in the `printf` statement is a placeholder for an integer, and `myArray[i]` is used to get the ith element of the array.

When you run this program you will see the output of the elements of the array.

    The first element of the array is: 1
    The second element of the array is: 2
    The third element of the array is: 3
    The fourth element of the array is: 4
    The fifth element of the array is: 5

This is a simple example but arrays can be used in many ways and have many different functionalities in C.