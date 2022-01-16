/*
Arrays in C
    * An array is defined as the collection of similar type of data items stored at contiguous memory locations. 
    * Arrays are the derived data type in C programming language which can store the primitive type of data 
    * such as int, char, double, float, etc.
    *
*/

// Example 1. -> Array of Student marks
#include <stdio.h>

int main()
{
    int i = 0;
    int marks[5] = {80, 60, 70, 85, 75};  //declaration of array
    // marks[0] = 80; //initialization of array
    // marks[1] = 60;
    // marks[2] = 70;
    // marks[3] = 85;
    // marks[4] = 75;
    //traversal of array
    for (i = 0; i < 5; i++)
    {
        printf("%d \n", marks[i]);
    } //end of for loop
    return 0;
}

// Example 2. -> Sorting an array [Insertion sort]
//               And find out the second largest number
// #include <stdio.h>

// void main()
// {
//     int i, j, temp;
//     int a[10] = {10, 9, 7, 101, 23, 44, 12, 78, 34, 23};
//     for (i = 0; i < 10; i++)
//     {
//         for (j = i + 1; j < 10; j++)
//         {
//             if (a[j] > a[i])
//             {
//                 temp = a[i];
//                 a[i] = a[j];
//                 a[j] = temp;
//             }
//         }
//     }
//     printf("Printing Sorted Element List ...\n");
//     for (i = 0; i < 10; i++)
//     {
//         if (i==9)
//             printf("%d \n", a[i]);
//         else
//             printf("%d,  ", a[i]);
//     }
//     printf("The second largest no is -> %d ", a[1]);
// }

// Example 3. -> Program to print the largest and second largest element of the array.
// #include <stdio.h>

// void main()
// {
//     int arr[100], i, n, largest, sec_largest;
//     printf("Enter the size of the array? ");
//     scanf("%d", &n);
//     printf("Enter the elements of the array? ");
//     for (i = 0; i < n-1; i++)
//     {
//         scanf("%d ", &arr[i]);
//     }
//     largest = arr[0];
//     sec_largest = arr[1];
//     for (i = 0; i < n-1; i++)
//     {
//         if (arr[i] > largest)
//         {
//             sec_largest = largest;
//             largest = arr[i];
//         }
//         else if (arr[i] > sec_largest && arr[i] != largest)
//         {
//             sec_largest = arr[i];
//         }
//     }
//     printf("largest = %d, second largest = %d", largest, sec_largest);
// }

// Example 4. -> Two-dimensional array example in C
// #include <stdio.h>

// int main()
// {
//     int i = 0, j = 0;
//     int arr[4][3] = {   {1, 2, 3},
//                         {2, 3, 4},
//                         {3, 4, 5},
//                         {4, 5, 6}
//                     };

//     //traversing 2D array
//     for (i = 0; i < 4; i++)  // rows
//     {
//         for (j = 0; j < 3; j++)  // columns
//         {
//             printf("arr[%d] [%d] = %d \n", i, j, arr[i][j]);
//         } //end of j
//     }     //end of i
//     return 0;
// }

// Example 5. -> C 2D array example: Storing elements in a matrix and printing it
// #include <stdio.h>

// void main()
// {
//     int arr[3][3], i, j;
//     for (i = 0; i < 3; i++)
//     {
//         for (j = 0; j < 3; j++)
//         {
//             printf("Enter array[%d][%d]: ", i, j);
//             scanf("%d", &arr[i][j]);
//         }
//     }
//     printf("\n printing the elements ....\n");
//     for (i = 0; i < 3; i++)
//     {
//         printf("\n");
//         for (j = 0; j < 3; j++)
//         {
//             printf("%d\t", arr[i][j]);
//         }
//     }
// }
