/* Functions in C
    * Library Functions
    * User Defined Functions
    * Call by value and Call by reference in C
*/

// Example 1 -> Sum of numbers with no return
// #include <stdio.h>
// int sum();   // prototype

// void main()
// {
//     int addition = 0;
//     printf("\nGoing to calculate the sum of two numbers:");
//     addition = sum();
//     printf("\nThe value of addition in main():- %d \n",addition);
// }

// int sum()  // definition
// {
//     int a, b;
//     int sum = 0;
//     printf("\nEnter two numbers (space between 2 numbers) : \n");
//     scanf("%d %d", &a, &b);
//     // printf("The sum is %d", a + b);
//     sum = a + b;
//     return sum;   
// }

// Example 2 -> Sum of numbers with return
// #include <stdio.h>
// int sum1();
// void main()
// {
//     printf("\nGoing to calculate the sum of two numbers:");
//     int result = sum1();
//     printf("The sum is %d",result);
// }

// int sum1()
// {
//     int a, b;
//     printf("\nEnter two numbers (space between 2 numbers) : \n");
//     scanf("%d %d", &a, &b);
//     return ( a + b);
// }

// Example 3 -> Calculate the area of a square
// #include<stdio.h>

// int square();

// void main()
// {
//     printf("Going to calculate the area of the square\n");
//     float area = square();
//     printf("The area of the square: %f\n",area);
// }
// int square()
// {
//     float side;
//     printf("Enter the length of the side in meters: \n");
//     scanf("%f",&side);
//     return (side * side);
// }

// Example 4 -> Find Odd/Even from the input number
// #include <stdio.h>

// int even_odd(int);

// void main()
// {
//     int n, flag = 0;
//     printf("\nGoing to check whether a number is even or odd");
//     printf("\nEnter the number: ");
//     scanf("%d", &n);
//     flag = even_odd(n);
//     if (flag == 0)
//     {
//         printf("\nThe number is odd");
//     }
//     else
//     {
//         printf("\nThe number is even");
//     }
// }
// int even_odd(int n)
// {
//     if (n % 2 == 0)
//     {
//         return 1;
//     }
//     else
//     {
//         return 0;
//     }
// }

// Call by value and Call by reference in C
// ----------------------------------------
// Example 5 -> Call by Value - the value does not change even if the argument value is changed in the called code
// #include<stdio.h>

// void change(int num) {
//     printf("Before adding value inside function num = %d \n",num);
//     num = num + 100;
//     printf("After adding value inside function num = %d \n", num);
// }

// int main() {
//     int x=100;
//     printf("Before function call x = %d \n", x);
//     change(x);  //passing value in function
//     printf("After function call x = %d \n", x);
// return 0;
// }

// Example 6 -> Call by Value Example: Swapping the values of the two variables
// #include <stdio.h>

// void swap(int, int); //prototype of the function

// int main()
// {
//     int a = 10;
//     int b = 20;
//     printf("Before swapping the values in main a = %d, b = %d\n", a, b); // printing the value of a and b in main
//     swap(a, b);
//     printf("After swapping values in main a = %d, b = %d\n", a, b); // The value of actual parameters do not change by changing the formal parameters in call by value, a = 10, b = 20
// }

// void swap(int a, int b)
// {
//     int temp;
//     temp = a;
//     a = b;
//     b = temp;
//     printf("After swapping values in function a = %d, b = %d\n", a, b); // Formal parameters, a = 20, b = 10
// }

// Example 7 -> Call by Reference Example: introduction to pointer (address referencing)
// #include<stdio.h>  

// void change(int *num) {    
//     printf("Before adding value inside function num = %d \n",*num);    
//     (*num) = *num + 100;    
//     printf("After adding value inside function num = %d \n", *num);    
// }      

// int main() {    
//     int x = 100;    
//     printf("Before function call x = %d \n", x);    
//     change(&x);     //passing reference in function    
//     printf("After function call x = %d \n", x);    
// return 0;  
// }  


// Example 8 -> Call by reference Example: Swapping the values of the two variables
#include <stdio.h>  

void swap(int *, int *);    //prototype of the function   

void main()  
{  
    int a = 10;  
    int b = 20;   
    printf("\nBefore swapping the values in main a = %d, b = %d\n",a,b); // printing the value of a and b in main  
    swap(&a, &b);  
    printf("After swapping values in main a = %d, b = %d\n\n",a,b); // The values of actual parameters do change in call by reference, a = 10, b = 20  
}  

void swap (int *a, int *b)  
{  
    int temp;   
    temp = *a;  
    *a = *b;  
    *b = temp;  
    printf("\nAfter swapping values in function a = %d, b = %d\n\n",*a,*b);     // Formal parameters, a = 20, b = 10   
}  


