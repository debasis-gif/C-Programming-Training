/*
Enum type declaration - Enum in C
    * The enum in C is also known as the enumerated type. It is a user-defined data type that consists of integer values, 
    * and it provides meaningful names to these values. The use of enum in C makes the program easy to understand and maintain.
    * enum flag {integer_const1, integer_const2,.....integter_constN}; 
    * enum fruits{mango, apple, strawberry, papaya};  
    *  
*/

// Example 1. -> enumerated data type for week days
#include <stdio.h>

enum weekdays
{
    Sunday = 1,
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday
};

int main()
{
    enum weekdays w; // variable declaration of weekdays type
    w = Wednesday;      // assigning value of Wednesday to w.
    printf("The value of day of week for Wednesday is %ld", w);
    return 0;
}

// Example 2. -> enumerated data type for months
// #include <stdio.h>

// enum months
// {
//     jan = 1,
//     feb,
//     march,
//     april,
//     may,
//     june,
//     july,
//     august,
//     september,
//     october,
//     november,
//     december
// };

// int main()
// {
//     // printing the values of months
//     for (int i = jan; i <= december; i++)
//     {
//         printf("%d, ", i);
//     }
//     return 0;
// }

// Example 3. -> enum in a switch case statement
// #include <stdio.h>

// enum days
// {
//     sunday = 1,
//     monday,
//     tuesday,
//     wednesday,
//     thursday,
//     friday,
//     saturday
// };

// int main()
// {
//     enum days d;
//     d = monday;
//     switch (d)
//     {
//     case sunday:
//         printf("Today is sunday");
//         break;
//     case monday:
//         printf("Today is monday");
//         break;
//     case tuesday:
//         printf("Today is tuesday");
//         break;
//     case wednesday:
//         printf("Today is wednesday");
//         break;
//     case thursday:
//         printf("Today is thursday");
//         break;
//     case friday:
//         printf("Today is friday");
//         break;
//     case saturday:
//         printf("Today is saturday");
//         break;
//     }

//     return 0;
// }
