/*
Switch case: 

*/

#include <stdio.h>
int main()
{
    //-------------------------------------------------------------
    // Example 1.
    int number = 0;
    printf("\nEnter a number: ");
    scanf("%d", &number);
    switch (number)
    {
    case 10:
        printf("number is equals to 10 \n");
        //break;
    case 50:
        printf("number is equal to 50 \n");
        //break;
    case 100:
        printf("number is equal to 100 \n");
        //break;
    default:
        printf("number is not equal to 10, 50 or 100 \n");
    }
    //-------------------------------------------------------------

    //-------------------------------------------------------------
    // Example 2. Nested Switch Case
    // int i = 10;
    // int j = 20;

    // switch (i)
    // {
    // case 10:
    //     printf("\nThe value of i evaluated in outer switch: %d\n", i);
        
    // case 20:
    //     switch (j)
    //     {
    //     case 20:
    //         printf("The value of j evaluated in nested switch: %d\n", j);
    //     }
    // }
    // printf("\nExact value of i is : %d", i);
    // printf("\nExact value of j is : %d\n", j);
    //-------------------------------------------------------------
 
    return 0;
}