
Conditional logic statements in C programming allow you to control the flow of your program based on certain conditions. These statements include the `if`, `if-else`, and `switch` statements.

The `if` statement is used to check if a certain condition is true, and if it is, a block of code is executed. Here is an example of an `if` statement:

    #include <stdio.h>
    
    int main() {
        int x = 5;
        if (x > 0) {
            printf("x is greater than 0\n");
        }
        return 0;
    }

In this example, the `if` statement checks if the variable `x` is greater than 0. If it is, the code block inside the curly braces is executed and the message "x is greater than 0" is printed.

The `if-else` statement is similar to the `if` statement, but it also allows you to specify what code to execute if the condition is false. Here is an example of an `if-else` statement:

    #include <stdio.h>
    
    int main() {
        int x = 5;
        if (x > 0) {
            printf("x is greater than 0\n");
        } else {
            printf("x is less than or equal to 0\n");
        }
        return 0;
    }


In this example, the `if` statement checks if the variable `x` is greater than 0. If it is, the first code block inside the curly braces is executed and the message "x is greater than 0" is printed. If the condition is false, the code block inside the else statement is executed and the message "x is less than or equal to 0" is printed.

The `switch` statement is used to perform different actions based on different conditions. It's similar to a series of if-else statements. Here is an example of a `switch` statement:

    #include <stdio.h>
    
    int main() {
        int x = 2;
        switch (x) {
            case 1:
                printf("x is 1\n");
                break;
            case 2:
                printf("x is 2\n");
                break;
            case 3:
                printf("x is 3\n");
                break;
            default:
                printf("x is not 1, 2, or 3\n");
        }
        return 0;
    }


In this example, the `switch` statement checks the value of the variable `x`. If it is 1, the code block associated with the `case 1:` statement is executed and the message "x is 1" is printed. If it is 2, the code block associated with the `case 2:` statement is executed and the message "x is 2" is printed. And so on. If the value of x is not matched with any of the case, the code block associated with the `default:` statement is executed and the message "x is not 1, 2, or 3" is printed.

In general, it's best to use the `if-else` or `switch` statement when you have a limited number of conditions to check, and the `if` statement when you have more complex conditions with multiple comparisons. Conditional statements are essential to any programming language and are fundamental to making decisions in your program.