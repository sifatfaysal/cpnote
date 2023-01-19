Binary search is an efficient algorithm for finding an element in a sorted array. It works by repeatedly dividing the array in half, until the element is found or it is determined that the element is not in the array. In this blog post, we will go over a basic program in C that demonstrates how to implement a binary search algorithm.

Here is the code for the binary search function:

    int binarySearch(int arr[], int l, int r, int x) 
    { 
        while (l <= r) 
        { 
            int m = l + (r-l)/2; 
      
            // Check if x is present at mid 
            if (arr[m] == x) 
                return m; 
      
            // If x greater, ignore left half 
            if (arr[m] < x) 
                l = m + 1; 
      
            // If x is smaller, ignore right half 
            else
                r = m - 1; 
        } 
      
        // if we reach here, then element was not present 
        return -1; 
    } 

The function takes four parameters: an array of integers (arr), the left index of the array (l), the right index of the array (r), and the element we are searching for (x). The function uses a while loop to repeatedly divide the array in half, until the element is found or it is determined that the element is not in the array.

The middle index of the array is calculated using the following line of code:

    int m = l + (r-l)/2;
It checks if the element x is present at the middle index by comparing it with arr[m].

If arr[m] is equal to x, the function returns the index m.

If arr[m] is less than x, the function ignores the left half of the array by updating the left index to m+1.

If arr[m] is greater than x, the function ignores the right half of the array by updating the right index to m-1.

If the while loop completes and the element is not found, the function returns -1.

Here is an example of how to use the binary search function:

    #include <stdio.h>
    
    int main()
    {
        int arr[] = {2, 3, 4, 10, 40};
        int n = sizeof(arr)/ sizeof(arr[0]);
        int x = 10;
        int result = binarySearch(arr, 0, n-1, x);
        (result == -1)? printf("Element is not present in array") 
                     : printf("Element is present at index %d", result);
        return 0;
    }

In this example, we have an array of integers {2, 3, 4, 10, 40} and we are searching for the element 10. The function call to binarySearch(arr, 0, 4, 10) returns the index 3, and the output will be "Element is present at index 3".

This is a very basic program to understand the binary search algorithm in C. With this basic understanding, you can now start experimenting with more advanced implementations and variations of the algorithm.