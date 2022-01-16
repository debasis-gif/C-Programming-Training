/*
Variable Types => Local, global, static, automatic, external
Data Types => Basic/Primitive, Derived, Enumeration, Void
Basic Data type => int, char, float, double
Derived Data type => array, pointer, structure, union
Enumeration Data type => enum
Void data type => void
1 byte => char, signed char (-128 to 127), unsigned char (0 to 255)
2 byte => short, signed short (-32768 to 32767), unsigned short (0 to 65535)
2 byte => int, signed int (-32768 to 32767), unsigned int (0 to 65535)
2 byte => short int, signed short int (-32768 to 32767), unsigned short int (0 to 65535)
4 byte => long int, signed long int (-2,147,483,648 to 2,147,483,647) unsigned long int (0 to 4,294,967,295)
4 byte => float
8 byte => double
10 byte => long double 
*/
 
#include "myfile.h"  
#include <stdio.h>  

int value = 20; //global variable

void printValue()
{  
    printf("Extern Global variable: %d \n", extern_x); 
    printf("Gobal Variable in the program inside printValue(): %d\n", value);
}  

void function()
{
    int func_x = 10;        //local variable
    static int func_y = 10; //static variable => static variables retain their value between different functions
    func_x +=  1; 
    func_y +=  1;
    printf("func_x = %d,  func_y = %d\n", func_x, func_y);
}

void main()
{
    int x = 10;      //local variable (also automatic)
    auto int y = 20; //automatic variable
    printf("Gobal Variable in the program outside any functions: %d\n", value);
    printValue();
    for (int i=0; i<5; i++)
    {
        function(); // static variable holds their value and increment by 1 each time the function() is called
    }
}