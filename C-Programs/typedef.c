/*
TypeDef in C
    * The typedef is a keyword used in C programming to provide some meaningful names to the already existing 
    * variable in the C program. It behaves similarly as we define the alias for the commands. In short, 
    * we can say that this keyword is used to redefine the name of an already existing variable.
    * Syntax: typedef <existing_name> <alias_name>  
    * eg: typedef unsigned int unit; 
    * unit a, b; 
    * 

*/

// Example 1. -> typedef of unsigned int to unit;
#include <stdio.h>

int main()
{
    typedef unsigned int unit;
    unit i, j;
    i = 10;
    j = 20;
    printf("Value of i is :%d", i);
    printf("\nValue of j is :%d", j);
    return 0;
}

// Example 2. -> typedef of structures
// #include <stdio.h>
// typedef struct student
// {
//     char name[20];
//     int age;
// } stud;

// int main()
// {
//     stud s1;
//     printf("Enter the details of student s1: ");
//     printf("\nEnter the name of the student: ");
//     //scanf("%s", &s1.name);
//     gets(s1.name);
//     printf("\nEnter the age of student: ");
//     scanf("%d", &s1.age);
//     printf("\nName of the student is : %s", s1.name);
//     printf("\nAge of the student is : %d", s1.age);
//     return 0;
// }


// Example 3. -> Using Array of Structures or Collection of Structures in C
// #include <stdio.h>
// #include <string.h>

// typedef struct student
// {
//     int rollno;
//     char name[20];
// }stud;

// int main()
// {
//     int i;
//     //struct student st[5];
//     stud st[5];
//     printf("Enter Records of 5 students");
//     for (i = 0; i < 2; i++)
//     {
//         printf("\nEnter Rollno: ");
//         scanf("%d", &st[i].rollno);
//         printf("\nEnter Name: ");
//         // scanf("%s", &st[i].name);
//         gets(st[i].name);
//         fgets(st[i].name,20,stdin);
//     }
//     printf("\nStudent Information List:");
//     for (i = 0; i < 2; i++)
//     {
//         printf("\nRollno: %d, Name: %s", st[i].rollno, st[i].name);
//     }
//     return 0;
// }
