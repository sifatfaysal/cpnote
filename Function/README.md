Here's an example of a basic program that demonstrates the use of a function in C:

    #include <stdio.h>
    
    // Function prototype
    int add(int a, int b);
    
    int main() {
        int x = 5, y = 7, result;
    
        // Function call
        result = add(x, y);
    
        printf("Result: %d\n", result);
    
        return 0;
    }
    
    // Function definition
    int add(int a, int b) {
        return a + b;
    }

In this program, we have a function called "add" that takes two integer arguments, "a" and "b", and returns the sum of those two numbers. The function is first declared with a prototype, which specifies the function's return type and the types of its arguments. Then, in the main function, we call the add function and store the result in a variable called "result". Finally, we print out the result to the console.

When you run the program, it will output "Result: 12" to the console, since 5 + 7 = 12.

It is worth noting that you can call a function before declaring it in the code. This is called a "forward declaration". This is useful when you have functions that call each other.

This is just a basic example of how functions work in C. You can use functions to organize your code and make it more readable and maintainable.