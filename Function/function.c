#include <stdio.h>

// Function prototype
int add(int a, int b);

int main()
{
    int x = 5, y = 7, result;

    // Function call
    result = add(x, y);

    printf("Result: %d\n", result);

    return 0;
}

// Function definition
int add(int a, int b)
{
    return a + b;
}
