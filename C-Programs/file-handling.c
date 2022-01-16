/*
File Handling in C
    * Creation of the new file
    * Opening an existing file
    * Reading from the file
    * Writing to the file
    * Deleting the file
    * 
    * FILE *fopen( const char * filename, const char * mode );  
    * int fclose( FILE *fp );  
    * int fprintf(FILE *stream, const char *format [, argument, ...]) 
    * int fscanf(FILE *stream, const char *format [, argument, ...])  
    * int fputc(int c, FILE *stream)  
    * int fgetc(FILE *stream)  
    * int fputs(const char *s, FILE *stream)  
    * char* fgets(char *s, int n, FILE *stream)  
    * [int fseek(FILE *stream, long int offset, int whence)  ]
    * [void rewind(FILE *stream) ]
    * 
    * 
*/

// Example 1. Open a File for reading and display it's content in the terminal
#include <stdio.h>

void main()
{
    FILE *fp;
    char ch;
    fp = fopen("file-handling.c", "r");
    while (1)
    {
        ch = fgetc(fp);
        if (ch == EOF)
            break;
        printf("%c", ch);
    }
    fclose(fp);
}

// Example 2. Writing & Reading File : fprintf() function
// #include <stdio.h>

// int main()
// {
//     FILE *fp;
//     // ----- Creating & Writing in a file
//     fp = fopen("file.txt", "a");               //opening file
//     fprintf(fp, "Hello file by fprintf...\n"); //writing data into file
//     fclose(fp);                                //closing file

//     // ----- Reading the file created
//     char buff[255];         //creating char array to store data of file
//     fp = fopen("file.txt", "r");
//     while (fscanf(fp, "%s\n", buff) != EOF)
//     {
//         printf("%s ", buff);
//     }

//     fclose(fp);

//     return 0;
// }

// Example 3. C File Example: Storing employee information
// #include <stdio.h>

// void main()
// {
//     FILE *fptr;
//     int id;
//     char name[30];
//     float salary;
//     fptr = fopen("emp.txt", "w+"); /*  open for writing */
//     if (fptr == NULL)
//     {
//         printf("File does not exists \n");
//         return;
//     }
//     printf("Enter the id\n");
//     scanf("%d", &id);
//     fprintf(fptr, "Id= %d\n", id);
//     printf("Enter the name \n");
//     //fgets(name,20, stdin);
//     scanf("%s", name);
//     fprintf(fptr, "Name= %s\n", name);
//     printf("Enter the salary\n");
//     scanf("%f", &salary);
//     fprintf(fptr, "Salary= %.2f\n", salary);
//     fclose(fptr);
// }

// Example 4. -> Reading a file char by char using fgetc()
// #include <stdio.h>
// #include <conio.h>
// void main()
// {
//     FILE *fp;
//     char c;
//     // clrscr();
//     fp = fopen("file.txt", "r");

//     while ((c = fgetc(fp)) != EOF)
//     {
//         printf("%c", c);
//     }
//     fclose(fp);
//     //getch();
// }

// Example 5. -> Writing & Reading a file using fputs() & fgets()
// #include <stdio.h>
// #include <conio.h>
// void main()
// {
//     FILE *fp;

//     // Writing to a file using fputs()
//     fp = fopen("file2.txt", "a");
//     fputs("hello c programming\n", fp);
//     fputs("\n",fp);

//     fclose(fp);

//     // Reading from a file using fgets()
//     char text[300];  
//     char c;
//     fp = fopen("file2.txt", "r");
//     while (fscanf(fp, "%s\n", text) != EOF)
//         printf("%s", fgets(text, 200, fp));

//     fclose(fp);
//     getch();
// }