// This program sorts and array of duplicates in ascending order
// It removes the duplicates

#include<stdio.h>

static int sortAsc(int[], int );

static int removeDuplicates(int[], int );

int main()
{
    int arr[] = {10,40,20,30,20,40,30,50};
    int length =  sizeof(arr)/sizeof(arr[0]); // finding the length of array

    printf("\nThe unsorted array of duplicates: \n");
    for (int i=0; i<length; i++)
    {
        if (i == (length -1))
        {
            printf("%d\n  ",arr[i]);
        }
        else {printf("%d,  ",arr[i]);}
    }

    // sort the unsorted array using a function call   
    sortAsc(arr, length );

    printf("\nThe sorted array of duplicates: \n");
    for (int i=0; i<length; i++)
    {
        if (i == (length -1))
        {
            printf("%d\n  ",arr[i]);
        }
        else {printf("%d,  ",arr[i]);}
    }
    
    // Call the remove duplicate function to remove the duplicates from the array
    int len = removeDuplicates(arr, length );
   
    printf("\nThe array without duplicates: \n");
    for (int i=0; i<len; i++)
    {
        printf("%d,  ",arr[i]);
    }
    printf("\n");

    return 0;
}

static int sortAsc(int arr[], int len)
{
    // unsorted array = {10,40,20,30,20,40,30,50};
    for (int i=0; i<len; i++)
    {
        int tmp = 0;  // logic of swap using temporary variable 
        for (int j=i+1; j<len; j++)
        {
            if (arr[i] > arr[j])
            {
                tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp; 
            }
        }
    }
}

static int removeDuplicates(int arr[], int len)
{
    // sorted array with duplicates {10,  20,  20,  30,  30,  40,  40,  50}
    int temp[8] = {};
    int j = 0;
    for (int i=0; i<len; i++)
    {
        if (arr[i] != arr[i+1])
        {
            temp[j] = arr[i];
            j++;
        }
    }
    
    // printing the temporary array
    printf("The temporary array...\n");
    for (int i=0; i<j; i++)
    {
        printf("%d, ",temp[i]);
    }
    
    // changing the original array
    for (int i=0; i<j; i++)
    {
        arr[i] = temp[i];
    }
    return j;
}