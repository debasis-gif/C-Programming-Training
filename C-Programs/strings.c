/*
Strings in C declared:
    1. By char array
    2. By string literal

*/

// Example 1. -> Example where a string is declared and being printed.
// #include<stdio.h>
// #include <string.h>

// int main(){
//    char ch[11] = {'P', 'c', 's', ' ', 'G', 'l', 'o', 'b', 'a', 'l'};
//    char ch2[11] = "Pcs Global";

//    printf("Char Array Value is: %s -> Debasis\n", ch);
//    printf("String Literal Value is: %s -> Debasis\n", ch2);
//  return 0;
// }

// Example 2. -> Example of traversing Strings => counting the number of vowels in a string
// #include<stdio.h>
// void main ()
// {
//     char s[11] = "Pcs Global";
//     char vowel[6] = "";
//     int i = 0;
//     int count = 0;
//     while (i < 11)
//     {
//         if(s[i]=='a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'u' || s[i] == 'o')
//         {
//             count ++;
//             vowel[count-1] = s[i];
//         }
//         i++;
//     }
//     printf("\nThe number of vowels %d",count);
//     printf("\nThe vowels in the string '%s' are : '%s'  ", s, vowel);
// }

// Example 3. -> Example of traversing Strings => accepting string input with spaces
// #include<stdio.h>

// void main ()
// {
//     char s[30];
//     printf("Enter the string? ");
//     //scanf("%s",s);
//     scanf("%[^\n]s",s);
//     printf("You entered %s",s);
// }

// Example 4. -> Pointers with strings
// #include<stdio.h>

// void main ()
// {
//     char s[11] = "Pcs Global";
//     char *p = s; // pointer p is pointing to string s.
//     printf("%s",p); // the string Pcs Global is printed if we print p.
// }

// Example 5. -> Use of pointers to copy the content of a string into another
// #include<stdio.h>
// void main ()
// {
//     char *p = "Hello PCS Global";
//     printf("\n\nString p: %s\n",p);
//     char *q;
//     printf("\ncopying the content of p into q...\n");
//     q = p;
//     printf("\nString q: %s\n\n",q);
// }

// Example 6. -> gets() function
// #include<stdio.h>
// void main ()
// {
//     char s[30];
//     printf("\nEnter the string? ");
//     gets(s);
//     printf("\n\nYou entered => '%s'\n\n",s);
// }

// Example 7. -> fgets() function -> it is much safer than gets() to avoid the buffer overflow error
// #include<stdio.h>
// void main()
// {
//    char str[20];
//    printf("\nEnter the string? ");
//    fgets(str, 20, stdin);
//    printf("\n%s", str);
// }

// Example 8. -> puts() function is very much similar to printf() function.
// The puts() function is used to print the string on the console which is previously read by using gets() or scanf() function.
// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     char name[50];
//     printf("Enter your name: ");
//     gets(name);     //reads string from user
//     printf("Your name is: ");
//     puts(name);     //displays string
//     return 0;
// }

// Example 9. -> The strlen() function returns the length of the given string. It doesn't count null character '\0'.
// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char ch[20] = {'P', 'c', 's', ' ', 'G', 'l', 'o', 'b', 'a', 'l', '\0'};
//     printf("Length of string is: %d", strlen(ch));
//     return 0;
// }

// Example 10. -> The strcpy(destination, source) function copies the source string in destination.
// #include<stdio.h>
// #include <string.h>

// int main(){
//  char ch[20] = {'P', 'c', 's', ' ', 'G', 'l', 'o', 'b', 'a', 'l', '\0'};
//    char ch2[20];
//    strcpy(ch2,ch);
//    printf("\nValue of second string is: %s\n\n",ch2);
//  return 0;
// }

// Example 11. -> The strcat(first_string, second_string) function concatenates two strings and result is returned to first_string.
// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     char ch[10] = {'H', 'e', 'l', 'l', 'o', '\0'};
//     char ch2[10] = {' ', 'C', '\0'};
//     strcat(ch, ch2);
//     printf("\nValue of first string is: %s\n\n", ch);
//     return 0;
// }

// Example 12. -> The strcmp(first_string, second_string) function compares two string and returns 0 if both strings are equal
// #include <stdio.h>
// #include <string.h>

// void main()
// {
//     char str1[20], str2[20];
//     printf("Enter 1st string: ");
//     gets(str1); //reads string from console
//     printf("Enter 2nd string: ");
//     gets(str2);
//     if (strcmp(str1, str2) != 1)
//         printf("Strings are equal");
//     else
//         printf("Strings are not equal");
//     //return 0;
// }

// Example 13. -> The strrev(string) function returns reverse of the given string.
// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     char str[20];
//     printf("\nEnter string: ");
//     gets(str); //reads string from console
//     printf("\nString is: %s", str);
//     printf("\nReverse String is: %s", strrev(str));
//     return 0;
// }

// Example 14. -> The strlwr(string) function returns string characters in lowercase
// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char str[20];
//     printf("Enter string: ");
//     gets(str); //reads string from console
//     printf("\nString is: %s", str);
//     printf("\nLower String is: %s\n\n", strlwr(str));
//     return 0;
// }

// Example 15. -> The strupr(string) function returns string characters in uppercase.
// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char str[20];
//     printf("Enter string: ");
//     gets(str); //reads string from console
//     printf("\nString is: %s", str);
//     printf("\nUpper String is: %s\n\n", strupr(str));
//     return 0;
// }

// Example 16. -> The strstr() function returns pointer to the first occurrence of the matched string in the given string.
// It is used to return substring from first match till the last character.
// char *strstr(const char *string, const char *match)  ->
// 1st parameter = full string  2nd parameter = sub string that is searched
#include <stdio.h>
#include <string.h>

int main()
{
    char str[100] = "This is Debasis Pal with C and Java";
    char *sub = null;
    sub = strstr(str, "Java");
    if (sub != NULL)
        printf("\nSubstring %s found...\n", sub);
    else
        printf("\nSubstring %s NOT found...\n", sub);
    return 0;
}


// Example 17. -> Math functions in C
// #include <stdio.h>
// #include <math.h>

// int main()
// {
//     printf("\n%f", ceil(3.6));
//     printf("\n%f", ceil(3.3));
//     printf("\n%f", floor(3.6));
//     printf("\n%f", floor(3.2));
//     printf("\n%f", sqrt(16));
//     printf("\n%f", sqrt(7));
//     printf("\n%f", pow(2, 4));
//     printf("\n%f", pow(3, 3));
//     printf("\n%d", abs(-12));
//     return 0;
// }