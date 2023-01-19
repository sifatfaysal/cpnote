#include <stdio.h>

int main()
{
    int x = 5, y = 3;

    // Data Operators
    printf("x + y = %d\n", x + y); // Output: 8
    printf("x - y = %d\n", x - y); // Output: 2
    printf("x * y = %d\n", x * y); // Output: 15
    printf("x / y = %d\n", x / y); // Output: 1
    printf("x % y = %d\n", x % y); // Output: 2

    // Logical Operators
    printf("(x > y) = %d\n", x > y);   // Output: 1 (true)
    printf("(x < y) = %d\n", x < y);   // Output: 0 (false)
    printf("(x >= y) = %d\n", x >= y); // Output: 1 (true)
    printf("(x <= y) = %d\n", x <= y); // Output: 0 (false)
    printf("(x == y) = %d\n", x == y); // Output: 0 (false)
    printf("(x != y) = %d\n", x != y); // Output: 1 (true)
    return 0;
}
