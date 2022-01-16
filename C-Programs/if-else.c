/*
if-else
    1. Even Odd number verify
    2. Largest number out of 3
    3. Check whether a person is eligible to vote or not
if-else if ladder statement
    1. Compare the marks to derive at the grades
*/

#include <stdio.h>
int main()
{
//     //------------------------------------------
//     // Even Odd number verify
//     int num = 0;
//     printf("Enter a number: ");
//     scanf("%d", &num);
//     if (num % 2 == 0) 
//         printf("%d is even number \n", num);
//     else
//     {
//         printf("%d is odd number \n", num);
//     }
    
    //------------------------------------------
    // Largest number out of 3
    int a, b, c = 0;
    printf("\nEnter three numbers? \n");
    scanf("%d, %d, %d", &a, &b, &c);
    if (a > b && a > c)
    {
        printf("%d is largest \n", a);
    }
    if (b > a && b > c)
    {
        printf("%d is largest \n", b);
    }
    if (c > a && c > b)
    {
        printf("%d is largest \n", c);
    }
    if (a == b && a == c)
    {
        printf("All are equal \n");
    }
    //------------------------------------------

    // //------------------------------------------
    // // Check whether a person is eligible to vote or not
    // int age = 0;
    // printf("\nEnter your age: ");
    // scanf("%d", &age);
    // if (age >= 18)
    // {
    //     printf("You are eligible to vote... \n");
    // }
    // else
    // {
    //     printf("Sorry ... you can't vote \n");
    // }
    // //------------------------------------------

    // //------------------------------------------
    // // if-else if ladder statement
    // // Compare the marks to derive at the grades
    // int marks;
    // printf("\nEnter your marks: ");
    // scanf("%d", &marks);
    // if (marks > 85 && marks <= 100)
    // {
    //     printf("Congrats ! you scored grade A ...\n");
    // }
    // else if (marks > 60 && marks <= 85)
    // {
    //     printf("You scored grade B + ...\n");
    // }
    // else if (marks > 40 && marks <= 60)
    // {
    //     printf("You scored grade B ...\n");
    // }
    // else if (marks > 30 && marks <= 40)
    // {
    //     printf("You scored grade C ...\n");
    // }
    // else
    // {
    //     printf("Sorry you are failed ...\n");
    // }

    // return 0;
}