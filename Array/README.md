Here is a basic program that demonstrates how to use an array in C:

    #include <stdio.h>
    
    int main() {
        int numbers[5]; // declare an array of 5 integers
    
        for (int i = 0; i < 5; i++) {
            printf("Enter a number: ");
            scanf("%d", &numbers[i]);
        }
    
        printf("The numbers in the array are: ");
        for (int i = 0; i < 5; i++) {
            printf("%d ", numbers[i]);
        }
    
        return 0;
    }

**Explanation:**

-   The first line declares an array of 5 integers, named "numbers".
-   The first for loop prompts the user to enter 5 numbers, which are then stored in the "numbers" array using the **scanf()** function.
-   The second for loop prints out the numbers stored in the "numbers" array.

When you run this program, it will prompt you to enter 5 numbers, and then print out those numbers.