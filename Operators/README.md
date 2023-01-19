Here is a basic program that demonstrates the use of data operators and logical operators in C:

    #include <stdio.h>
    
    int main() {
        int x = 5, y = 3;
    
        // Data Operators
        printf("x + y = %d\n", x + y); // Output: 8
        printf("x - y = %d\n", x - y); // Output: 2
        printf("x * y = %d\n", x * y); // Output: 15
        printf("x / y = %d\n", x / y); // Output: 1
        printf("x % y = %d\n", x % y); // Output: 2
    
        // Logical Operators
        printf("(x > y) = %d\n", x > y); // Output: 1 (true)
        printf("(x < y) = %d\n", x < y); // Output: 0 (false)
        printf("(x >= y) = %d\n", x >= y); // Output: 1 (true)
        printf("(x <= y) = %d\n", x <= y); // Output: 0 (false)
        printf("(x == y) = %d\n", x == y); // Output: 0 (false)
        printf("(x != y) = %d\n", x != y); // Output: 1 (true)
        return 0;
    }

This program declares two integer variables, x and y, and assigns them the values 5 and 3 respectively. It then uses various data operators to perform arithmetic operations on these variables, such as addition, subtraction, multiplication, and division. The program also uses logical operators to compare the values of x and y and check if they are greater than, less than, equal to, or not equal to each other. The outputs of these comparisons are displayed on the screen.