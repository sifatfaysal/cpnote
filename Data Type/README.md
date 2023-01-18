Data types are an important concept in programming, as they determine the type and size of data that a variable can store. In C programming, there are several built-in data types that can be used to define variables.

The basic data types in C are:

-   char (character)
-   int (integer)
-   float (floating point number)
-   double (double precision floating point number)

Here is an example program that demonstrates the use of these data types:

    #include <stdio.h>
        int main() {
          char c = 'A';
          int i = 10;
          float f = 3.14;
          double d = 3.14159265358979323846;
        
          printf("The character is: %c\n", c);
          printf("The integer is: %d\n", i);
          printf("The float is: %f\n", f);
          printf("The double is: %lf\n", d);
        
          return 0;
        }


In this program, we first define four variables: c, i, f, and d. We assign the value 'A' to the char variable c, the value 10 to the int variable i, the value 3.14 to the float variable f, and the value 3.14159265358979323846 to the double variable d.

Next, we use the **printf()** function to print the values of these variables to the console. The **%c,** **%d,** **%f,** and **%lf** format specifiers are used to indicate that the corresponding argument is of type char, int, float, and double, respectively.

When we run this program, it will output the following:

    The character is: A
    The integer is: 10
    The float is: 3.140000
    The double is: 3.141593


As you can see, the program correctly prints the values of the variables of each data type.

In C programming, it is important to use the correct data type for a variable, as it determines the amount of memory that will be allocated for that variable and affects the precision and range of values that can be stored in it.

I hope this program will help you understand the basic data types in C programming.