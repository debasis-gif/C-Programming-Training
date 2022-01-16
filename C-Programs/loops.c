/*
Loops: 
    do-while
    while
    for
*/

// do-while loop
#include <stdio.h>
#include <stdlib.h>

void main()
{
    // char c;
    // int choice, dummy;
    // do
    // {
    //     printf("\n1. Print Hello\n2. Print PCSGobal\n3. Exit\n");
    //     scanf("%d", &choice);
    //     switch (choice)
    //     {
    //     case 1:
    //         printf("Hello");
    //         break;
    //     case 2:
    //         printf("PCSGobal");
    //         break;
    //     case 3:
    //         exit(0);
    //         //break;
    //     default:
    //         printf("please enter valid choice");
    //     }

    //     printf("\ndo you want to enter more? ");
    //     scanf("%d", &dummy);
    //     scanf("%c", &c);
    // } while (c == 'y');

    // // While loop
    // int i = 1, number = 0;
    // printf("Enter a number: ");
    // scanf("%d", &number);
    // while (i <= 10)
    // {
    //     if (i == 10)
    //         printf("%d \n<---- End ---->\n ", (number * i));
    //     else
    //         printf("%d,  ", (number * i));
    //     i++;
    // }

    // For Loop
    // Example 1. -> Multiplication table for the number input
    // int i = 1, number = 0;
    // printf("Enter a number: ");
    // scanf("%d", &number);
    // for (i = 1; i <= 10; i++)
    // {
    //     if (i == 10)
    //         printf("%d \n<---- End ---->\n ", (number * i));
    //     else
    //         printf("%d,  ", (number * i));
    // }

    // Example 2. -> Properties of Expression1
    // The expression represents the initialization of the loop variable
    // We can initialize more than one variable in Expression 1
    // Expression 1 is optional
    //int a, b, d;
    // for ( a=0, b = 12, d = 23; a < 2; a++)
    // {
    //     printf("%d ", a + b + d);
    // }

    // // Example 3. -> Properties of Expression2
    // int ii, jj, kk;
    // for (ii = 0, jj = 0, kk = 0; ii < 4, kk < 8, jj < 10; ii++)
    // {
    //     printf("%d %d %d\n", ii, kk, jj);
    //     jj += 2;
    //     kk += 3;
    // }
    

    // Nested Loop - Example of nested for loop
    // int n; // variable declaration
    // printf("Enter the value of n :");
    // scanf("%d", &n);
    // Displaying the n tables.
    // for (int i = 1; i <= n; i++) // outer loop
    // {
    //     for (int j = 1; j <= 10; j++) // inner loop
    //     {
    //         printf("%d\t", (i * j)); // printing the value.
    //     }
    //     printf("\n");
    // }

    // Nested Loop - Example of nested While loop
    int rows;                             // variable declaration
    int columns;                          // variable declaration
    int k2 = 1;                            // variable initialization
    printf("Enter the number of rows :"); // input the number of rows.
    scanf("%d", &rows);
    printf("\nEnter the number of columns :"); // input the number of columns.
    scanf("%d", &columns);
    int a2[rows][columns]; //2d array declaration
    int i2 = 1;
    while (i2 <= rows) // outer loop
    {
        int j2 = 1;
        while (j2 <= columns) // inner loop
        {
            printf("%d   ", i2 * j2); // printing the value of k2.
            k2++;               // increment counter
            j2++;
        }
        i2++;
        printf("\n");
    }
}