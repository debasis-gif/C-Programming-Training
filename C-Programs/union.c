/*
Union in C
    * Union can be defined as a user-defined data type which is a collection of different variables of different data types 
    * in the same memory location. The union can also be defined as many members, but only one member can contain a value 
    * at a particular point in time
    * Union is a user-defined data type, but unlike structures, they share the same memory location

*/
// Example 1. Union having same memory for all the member variables change in one will affect change in the others
// Also check the size of the Union - the size of the largest member of the Union is the size of the union
// #include <stdio.h>
// union abc
// {
//     int a;
//     char b;
// } var;
// union abcd
// {
//     int a;
//     char b;
//     float c;
//     double d;
// } unionsize;

// int main()
// {
//     var.a = 66;
//     printf("\n a = %d", var.a);
//     printf("\n b = %d", var.b);
//     printf("\n b = %c\n", var.b);
//     printf("\nSize of union 'unionsize' is %d\n\n", sizeof(unionsize));
// }

// Example 2. -> Accessing members of union using pointers
#include <stdio.h>

union abc
{
    int a;
    char b;
};

int main()
{
    union abc *ptr; // pointer variable declaration
    union abc var;
    var.a = 90;
    ptr = &var;   // assigning the union to the pointer *ptr
    printf("\nThe value of a is : %d", ptr->a);
    printf("\nThe value of b is : %d\n\n", ptr->b);
    return 0;
}

// Example 3a. -> Store issue - Why do we need C unions?
// #include <stdio.h>
// // Store struct consists of properties of BOOK as well as SHIRT, price being common in both
// struct store
// {
//     double price;
//     char *title;
//     char *author;
//     int number_pages;
//     int color;
//     int size;
//     char *design;
// };
// // This is only processing the BOOK properties, title, author, number_pages, price - 
// // leaving a wastage of memory due to un-utilizing the Shirt properties not being processed
// int main()  
// {
//     struct store book;
//     book.title = "C programming";
//     book.author = "Paulo Cohelo";
//     book.number_pages = 190;
//     book.price = 205;
//     printf("Size is : %ld bytes", sizeof(book));
//     return 0;
// }


// Example 3b. -> Store issue - Final solution using Unions to resolve the space issue encountered in the previous program
// #include <stdio.h>  

// struct store  
// {  
//     double price;  
//     union  
//     {  
//         struct {  
//         char *title;  
//         char *author;  
//         int number_pages;  
//         } book;  
      
//         struct {  
//         int color;  
//         int size;  
//         char *design;  
//         } shirt;  
//     } item;  
// };  

// int main()  
// {  
//     struct store s;  
//     s.item.book.title = "C programming";   
//     s.item.book.author = "John";  
//     s.item.book.number_pages = 189;  
//     printf("\nSize is %ld", sizeof(s));  
//     printf("\nThe Book assigned: '%s', by '%s', having %d pages.\n", 
//                 s.item.book.title, s.item.book.author, s.item.book.number_pages);
//     return 0;  
// }  




