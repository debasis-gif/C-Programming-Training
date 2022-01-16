/*
Dynamic Memory - Memory used in linked list
    * malloc()
    * calloc()
    * realloc()
    * free()
    * The concept of dynamic memory allocation in c language enables the C programmer to allocate memory at runtime. 
    * Dynamic memory allocation in c language is possible by 4 functions of stdlib.h header file
*/

// Example 1. -> malloc() - single block of memory allocation
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, *ptr, sum = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    ptr = (int *)malloc(n * sizeof(int)); //memory allocated using malloc
    if (ptr == NULL)
    {
        printf("Sorry! unable to allocate memory");
        exit(0);
    }
    printf("Enter elements of array: ");
    for (i = 0; i < n; ++i)
    {
        scanf("%d", ptr + i);
        sum += *(ptr + i);
    }
    printf("Sum=%d", sum);
    free(ptr);
    return 0;
}

// Example 2. -> calloc() - multiple block of memory allocation
// #include <stdio.h>
// #include <stdlib.h>

// int main()
// {
//     int n, i, *ptr, sum = 0;
//     printf("Enter number of elements: ");
//     scanf("%d", &n);
//     ptr = (int *)calloc(n, sizeof(int)); //memory allocated using calloc
//     if (ptr == NULL)
//     {
//         printf("Sorry! unable to allocate memory");
//         exit(0);
//     }
//     printf("Enter elements of array: ");
//     for (i = 0; i < n; ++i)
//     {
//         scanf("%d", ptr + i);
//         sum += *(ptr + i);
//     }
//     printf("Sum=%d", sum);
//     free(ptr);
//     return 0;
// }









