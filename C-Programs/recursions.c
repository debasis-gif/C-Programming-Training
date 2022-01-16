/*

Recursion is the process which comes into existence when a function calls a copy of itself to work on a smaller problem. 
Any function which calls itself is called recursive function, and such function calls are called recursive calls.

*/

// Example 1. -> Calculating the factorial of a number -> factorial of 4 is 4 * 3 * 2 * 1
#include <stdio.h>

int fact(int);

int main()
{
    int n, f;
    printf("Enter the number whose factorial you want to calculate? ");
    scanf("%d", &n);
    f = fact(n);
    printf("factorial = %d", f);
}

int fact(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    else
    {
        return n * fact(n - 1);
    }
}

// Example 2. -> find the nth term of the Fibonacci series -> 0, 1, 1, 2, 3, 5, 8, 13, 21, 34....
// #include<stdio.h>  

// int fibonacci(int);  // function prototype

// void main()  
// {  
//     int n,f;  
//     printf("Enter the value of n? ");  
//     scanf("%d",&n);  
//     for (int i=0; i<n; i++)
//     {
//         f = fibonacci(i);  
//         if (i == n-1)
//             printf("%d\n ",f); 
//         else
//             printf("%d, ",f); 
//     }
// }  

// int fibonacci (int n)  
// {  
//     if (n==0)  
//     {  
//     return 0;  
//     }  
//     else if (n == 1)  
//     {  
//         return 1;   
//     }  
//     else  
//     {  
//         return fibonacci(n-1) + fibonacci(n-2);  
//     }  
// }  





