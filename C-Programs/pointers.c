/*
Pointers in C
    * The pointer in C language is a variable which stores the address of another variable. 
    * This variable can be of type int, char, array, function, or any other pointer. 
    * The size of the pointer depends on the architecture. However, in 32-bit architecture the size of a pointer is 2 byte

*/

// Example 1. -> Basic understanding of pointer to differentiate between address and value of a pointer variable
// #include <stdio.h>

// int main()
// {
//     int number = 50;
//     int *p;
//     p = &number;                                 //stores the address of number variable
//     printf("Address of p variable is %x \n", p); // p contains the address of the number therefore printing p gives the address of number.
//     printf("Value of p variable is %d \n", *p);  // As we know that * is used to dereference a pointer therefore if we print *p, we will get the value stored at the address contained by p.
//     return 0;
// }

// Example 2. -> Pointer Program to swap two numbers without using the 3rd variable
// #include <stdio.h>

// int main()
// {
//     int a = 10, b = 20, *p1 = &a, *p2 = &b;

//     // Swapping without using a 3rd temp variable
//     printf("Before swap: *p1=%d *p2=%d", *p1, *p2);
//     *p1 = *p1 + *p2;  
//     *p2 = *p1 - *p2;  
//     *p1 = *p1 - *p2;  
//     printf("\nAfter swap: *p1=%d *p2=%d", *p1, *p2);

//     // Swapping back to the original values using 3rd temp variable
//     int *temp = NULL;
//     temp = p1;
//     p1 = p2;
//     p2 = temp;
//     printf("\nAfter re-swap: *p1=%d *p2=%d", *p1, *p2);

//     return 0;
// }

// Example 3. -> C Double Pointer (Pointer to Pointer)
// #include <stdio.h>

// void main()
// {
//     int a = 10;
//     int *p;
//     int **pp;
//     p = &a;                                   // pointer p is pointing to the address of a
//     pp = &p;                                  // pointer pp is a double pointer pointing to the address of pointer p
//     printf("address of a: %x\n", p);          // Address of a will be printed
//     printf("address of p: %x\n", pp);         // Address of p will be printed
//     printf("value stored at p: %d\n", *p);    // value stoted at the address contained by p i.e. 10 will be printed
//     printf("value stored at pp: %d\n", **pp); // value stored at the address contained by the pointer stored at pp, that is 10
// }

// Example 4. -> Pointer Arithmetic in C
// #include <stdio.h>
// int main()
// {
//     int number = 50;
//     int *p;      //pointer to int
//     p = &number; //stores the address of number variable
//     printf("\nAddress of p variable is %u \n", p);
//     p = p + 1;
//     printf("\nAfter increment: Address of p variable is %u \n\n", p); // in our case, p will get incremented by 4 bytes.
//     return 0;
// }

// Example 5. -> Traversing an array by using pointer
// #include <stdio.h>
// void main()
// {
//     int arr[5] = {1, 2, 3, 4, 5};
//     int *p = arr;
//     int i;
//     printf("printing array elements...\n");
//     for (i = 0; i < 5; i++)
//     {
//         printf("%d  ", *(p + i));
//     }
// }

// Example 6. -> C Pointer Addition
// #include <stdio.h>
// int main()
// {
//     int number = 50;
//     int *p;      //pointer to int
//     p = &number; //stores the address of number variable
//     printf("Address of p variable is %u \n", p);
//     p = p + 3; //adding 3 to pointer variable
//     printf("After adding 3: Address of p variable is %u \n", p);
//     return 0;
// }

// Example 7. -> C Pointer Subtraction
// #include <stdio.h>

// int main()
// {
//     int number = 50;
//     int *p;      //pointer to int
//     p = &number; //stores the address of number variable
//     printf("Address of p variable is %u \n", p);
//     p = p - 3; //subtracting 3 from pointer variable
//     printf("After subtracting 3: Address of p variable is %u \n", p);
//     return 0;
// }

// Example 8. -> Pointer to function in C
#include <stdio.h>

int addition();
int main()
{
    int result;
    int (*ptr)();      // pointer ptr to integer points to a function
    ptr = &addition;   // Address of function addition() is assigned to ptr
    result = (*ptr)(); // The dereferencing of the pointer address gives the value of addition
                       // result from the function and assigned to int result
    printf("The sum is %d", result);
}
int addition()
{
    int a, b;
    printf("Enter two numbers?");
    scanf("%d %d", &a, &b);
    return a + b;
}

// Example 9. -> Pointer to function in C, another example
// #include <stdio.h>

// int add(int, int);

// int main()
// {
//     int a, b;
//     int (*ip)(int, int);   // pointer ip to function prototyping statement
//     int result;
//     printf("Enter the values of a and b : ");
//     scanf("%d %d", &a, &b);
//     ip = &add;
//     result = (*ip)(a, b);
//     printf("Value after addition is : %d", result);
//     return 0;
// }
// int add(int a, int b)
// {
//     int c = a + b;
//     return c;
// }

// Example 10. -> Array of Function Pointers
// #include <stdio.h>

// float add(float, int);   // prototypes of add(), sub(), mul(), div()
// float sub(float, int);
// float mul(float, int);
// float div(float, int);

// int main()
// {
//     float x; // variable declaration.
//     int y;
//     float (*fp[4])(float, int); // function pointer declaration.
//     fp[0] = add;                // assigning addresses to the elements of an array of a function   pointer.
//     fp[1] = sub;
//     fp[2] = mul;
//     fp[3] = div;
//     printf("Enter the values of x and y :");
//     scanf("%f %d", &x, &y);
//     float r = (*fp[0])(x, y); // Calling add() function.
//     printf("\nSum of two values is : %f", r);
//     r = (*fp[1])(x, y); // Calling sub() function.
//     printf("\nDifference of two values is : %f", r);
//     r = (*fp[2])(x, y); // Calliung mul() function.
//     printf("\nMultiplication of two values is : %f", r);
//     r = (*fp[3])(x, y); // Calling div() function.
//     printf("\nDivision of two values is : %f", r);
//     return 0;
// }

// float add(float x, int y)
// {
//     float a = x + y;
//     return a;
// }
// float sub(float x, int y)
// {
//     float a = x - y;
//     return a;
// }
// float mul(float x, int y)
// {
//     float a = x * y;
//     return a;
// }
// float div(float x, int y)
// {
//     float a = x / y;
//     return a;
// }