In C programming, input and output operations are performed through a set of predefined functions. The most commonly used functions for input and output in C are scanf() and printf().

Input in C: The **scanf()** function is used to take input from the user. The syntax of the **scanf()** function is as follows: `scanf("format string", &variable);`

For example, to take an integer input from the user, the following code can be used:

    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

Output in C: The **printf()** function is used to display output to the user. The syntax of the **printf()** function is as follows: `printf("format string", variable);`

For example, to display the value of an integer variable, the following code can be used:

    int num = 10;
    printf("The value of num is: %d", num);

Here, **%d** is a format specifier for integer. Other format specifiers include **%c** for character, **%f** for float, **%lf** for double, and **%s** for string.

Example of Input and Output in C:

    #include <stdio.h>
    int main()
    {
        int num1, num2, sum;
        printf("Enter two integers: ");
        scanf("%d %d", &num1, &num2);
        sum = num1 + num2;
        printf("Sum of %d and %d is: %d", num1, num2, sum);
        return 0;
    }

Here we have taken two integers as input and added them to find the sum and then displayed the sum as the output.

In this blog post, we have discussed the basic input and output operations in C programming using **scanf()** and **printf()** functions. With these functions, you can easily take input from the user and display output to the user in your C programs.