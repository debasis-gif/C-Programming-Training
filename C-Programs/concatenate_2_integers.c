// This is to join 2 numbers and return the number as integer to main function

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int concatenateNum(int, int);

int main()
{
    int num1, num2, num3 = 0;
    printf("Enter 2 numbers separated by ',' : ");
    scanf("%d, %d", &num1, &num2 );
    num3 = concatenateNum(num1, num2);
    printf("The concatenated number is :- %d\n", num3);

    return 0;
}

int concatenateNum(int n1, int n2)
{
    char str1[20], str2[20];
    sprintf(str1, "%d", n1);
    sprintf(str2, "%d", n2);
    strcat(str1, str2);

    return atoi(str1);

}