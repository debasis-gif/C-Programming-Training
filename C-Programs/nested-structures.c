/*
C-Nested Structures
    * C provides us the feature of nesting one structure within another structure by using which, 
    * complex data types are created. For example, we may need to store the address of an entity employee in a structure. 
    * The attribute address may also have the subparts as street number, city, state, and pin code. Hence, 
    * to store the address of the employee, we need to store the address of the employee into a separate structure 
    * and nest the structure address into the structure employee.

*/

// Example 1. -> Employee having address nested
#include <stdio.h>

struct address
{
    char city[20];
    int pin;
    char phone[14];
};
struct employee
{
    char name[20];
    struct address add;
};

void main()
{
    struct employee emp;
    printf("Enter employee information?\n");
    printf("\nEnter Name: ");
    fgets(emp.name,20,stdin);
    printf("\nEnter Phone Number: ");
    fgets(emp.add.phone,14,stdin);
    printf("\nEnter City: ");
    fgets(emp.add.city,20,stdin);
    printf("\nEnter Pincode: ");
    scanf("%d", &emp.add.pin);
    //scanf("%s %s %d %s", emp.name, emp.add.city, &emp.add.pin, emp.add.phone);
    printf("\n\nPrinting the employee information....\n");
    printf("\nName: %s\nCity: %s\nPincode: %d\n\nPhone: %s\n\n", emp.name, emp.add.city, emp.add.pin, emp.add.phone);
}

// Example 2. -> C Nested Structure example
// #include <stdio.h>  
// #include <string.h>  

// struct Employee  
// {     
//    int id;  
//    char name[20];  
//    struct Date  
//     {  
//       int dd;  
//       int mm;  
//       int yyyy;   
//     }doj;  
// }e1;  

// int main( )  
// {  
//    //storing employee information  
//    e1.id=101;  
//    strcpy(e1.name, "Debasis Pal");//copying string into char array  
//    e1.doj.dd=10;  
//    e1.doj.mm=11;  
//    e1.doj.yyyy=2018;  
  
//    //printing first employee information  
//    printf( "\nemployee id : %d\n", e1.id);  
//    printf( "employee name : %s\n", e1.name);  
//    printf( "employee date of joining (dd/mm/yyyy) : %d/%d/%d\n\n", e1.doj.dd,e1.doj.mm,e1.doj.yyyy);  
//    return 0;  
// }  

// Example 3. -> Passing structure to function
// #include<stdio.h>  

// struct address   
// {  
//     char city[20];  
//     int pin;  
//     char phone[14];  
// };  
// struct employee  
// {  
//     char name[20];  
//     struct address add;  
// };  

// void display(struct employee);  // prototype of funtion display()

// void main ()  
// {  
//     struct employee emp;  
//     printf("Enter employee information? (Name <enter> City <tab>  Phone <tab>  PinCode) \n"); 
//     gets(emp.name); 
//     scanf("\t%s\t %s\t %d",emp.add.city, emp.add.phone, &emp.add.pin);  
//     display(emp);  
// }  

// void display(struct employee emp)  
// {  
//   printf("\nPrinting the details....\n");  
//   printf("\n%s %s %d %s\n",emp.name,emp.add.city,emp.add.pin,emp.add.phone);  
// }  
