/*
Data Structures in C
    * Structure in c is a user-defined data type that enables us to store the collection of different data types. 
    * Each element of a structure is called a member. 
    * Structures ca; simulate the use of classes and templates as it can store various information
    * The struct keyword is used to define the structure
*/

// Example 1. -> Entity employee data structure and accessing the member variables
#include <stdio.h>
#include <string.h>
struct employee
{
    int id;
    char name[50];
} e1;       //declaring e1 variable for structure

int main()
{
    //store first employee information
    e1.id = 101;
    strcpy(e1.name, "Animesh Agarwal");     //copying string into char array
    //printing first employee information
    printf("employee 1 id : %d\n", e1.id);
    printf("employee 1 name : %s\n", e1.name);
    return 0;
}


// Example 2. -> structure in C language to store many employees information
// #include <stdio.h>
// #include <string.h>

// struct employee
// {
//     int id;
//     char name[50];
//     int salary;
// } e1, e2;       //declaring e1 and e2 variables for structure

// int main()
// {
//     //store first employee information
//     e1.id = 101;
//     strcpy(e1.name, "Animesh Agarwal");     //copying string into char array
//     e1.salary = 56000;

//     //store second employee information
//     e2.id = 102;
//     strcpy(e2.name, "Debasis Pal");
//     e2.salary = 126000;

//     //printing first employee information
//     printf("\nemployee 1 id : %d\n", e1.id);
//     printf("employee 1 name : %s\n", e1.name);
//     printf("employee 1 salary : %d\n", e1.salary);

//     //printing second employee information
//     printf("\nemployee 2 id : %d\n", e2.id);
//     printf("employee 2 name : %s\n", e2.name);
//     printf("employee 2 salary : %d\n\n", e2.salary);
//     return 0;
// }
