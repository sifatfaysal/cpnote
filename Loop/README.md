We have discussed the three types of loops in C programming: for, while, and do-while. We have also provided examples of how to use each. Loops are an essential part of any programming language and are used to execute a set of instructions repeatedly until a specific condition is met. In C, there are three types of loops: for, while, and do-while.

For Loop

The for loop is a control structure that allows you to execute a set of instructions repeatedly for a specified number of times. The syntax for a for loop in C is as follows:

    for (initialization; condition; increment/decrement) {
       // code to be executed
    }

The initialization statement is executed only once, and it is used to initialize the loop counter. The condition is evaluated on each iteration, and if it is true, the code inside the loop is executed. Once the code inside the loop is executed, the increment/decrement statement is executed, and the process is repeated until the condition is false.

Here's an example of a for loop that prints the numbers from 1 to 10:

    #include <stdio.h>
    
    int main() {
       for (int i = 1; i <= 10; i++) {
          printf("%d ", i);
       }
       return 0;
    }

This program will output the numbers 1 through 10, each on a new line.

While Loop

The while loop is a control structure that allows you to execute a set of instructions repeatedly as long as a specific condition is true. The syntax for a while loop in C is as follows:

    while (condition) {
       // code to be executed
    }

The condition is evaluated before each iteration, and if it is true, the code inside the loop is executed. Once the code inside the loop is executed, the condition is evaluated again, and the process is repeated until the condition is false.

Here's an example of a while loop that prints the numbers from 1 to 10:

    #include <stdio.h>
    
    int main() {
       int i = 1;
       while (i <= 10) {
          printf("%d ", i);
          i++;
       }
       return 0;
    }

This program will output the numbers 1 through 10, each on a new line.

Do-While Loop

The do-while loop is similar to the while loop, but it is guaranteed to execute at least once. The syntax for a do-while loop in C is as follows:

    do {
       // code to be executed
    } while (condition);

The code inside the loop is executed, and then the condition is evaluated. If the condition is true, the code inside the loop is executed again, and the process is repeated until the condition is false.

Here's an example of a do-while loop that prints the numbers from 1 to 10:

    #include <stdio.h>
    
    int main() {
       int i = 1;
       do {
          printf("%d ", i);
          i++;
       } while (i <= 10);
       return 0;
    }

This program will output the numbers 1 through 10, each on a new line.
