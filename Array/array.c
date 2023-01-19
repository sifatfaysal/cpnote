#include <stdio.h>

int main()
{
    int numbers[5]; // declare an array of 5 integers

    for (int i = 0; i < 5; i++)
    {
        printf("Enter a number: ");
        scanf("%d", &numbers[i]);
    }

    printf("The numbers in the array are: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", numbers[i]);
    }

    return 0;
}
