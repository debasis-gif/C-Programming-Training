// This is a single Linked List Menu Driven program

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

// Structure of the Node
struct node
{
    int data;
    struct node *next;
};

struct node *head;

// Functions used
void beginInsert();
void lastInsert();
void randomInsert();
void beginDelete();
void lastDelete();
void randomDelete();
void display();
void search();

void main()
{
    int choice = 0;
    while (choice != 9)
    {
        printf("\n\n********** MAIN MENU **********\n");
        printf("\nChoose one option from the following list...\n");
        printf("\n=============================================\n");
        printf("\n1. Insert in the beginning. \n2. Insert at last. \n3. Insert at any random location. \n4. Delete from beginning. \
        \n5. Delete from last. \n6. Delete Node from specified location. \n7. Search for an element. \n8. Show \n9. Exit.\n");
        printf("\nEnter your choice: \n");
        scanf("\n%d", &choice);

        switch(choice)
        {
            case 1:
                beginInsert();
                break;
            case 2:
                lastInsert();
                break;
            case 3:
                randomInsert();
                break;
            case 4:
                beginDelete();
                break;
            case 5:
                lastDelete();
                break;
            case 6:
                randomDelete();
                break;
            case 7:
                display();
                break;
            case 8:
                search();
                break;
            case 9:
                exit(0);
                break;
            default:
                printf("Please enter a valid choice:\n");
        }
    }
}

void beginInsert()
{
    struct node *ptr;
    int item;
    ptr = (struct node *)malloc(sizeof(struct node *));

    if (ptr == NULL)
    {
        printf("\nOVERFLOW...\n");
    }
    else
    {
        printf("\nEnter value to Insert in beginning\n");
        scanf("%d",&item);
        ptr->data =  item;
        ptr->next = head;
        head = ptr;
        printf("\nNode inserted in beginning\n");
    }
}

void lastInsert()
{
    struct node *ptr, *temp;
    int item;
    ptr = (struct node *)malloc(sizeof(struct node));
    if (ptr == NULL)
    {
        printf("\nOVERFLOW\n");
    }
    else 
    {
        printf("\nEnter value to Insert at last\n");
        scanf("%d", &item);
        ptr->data = item;

        if (head == NULL)
        {
            ptr->next = NULL;
            head = ptr;
            printf("\nNode inserted to last/beginning of an empty list\n");
        }
        else
        {
            temp = head;
            while( temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = ptr;
            ptr->next = NULL;
            printf("\nNode inserted to last\n");
        }
    }
}

void randomInsert()
{
    int i, loc;
    int item;
    struct node *ptr, *temp;
    ptr = (struct node *)malloc(sizeof(struct node));
    if (ptr == NULL)
    {
        printf("\nOVERFLOW\n");
    }
    else
    {
        printf("\nEnter value to Insert at Random\n");
        scanf("%d", &item);
        ptr->data = item;
        printf("\nEnter the location after which want to Insert\n");
        scanf("%d", &loc);
        temp = head;

        for (i=0; i<loc; i++)
        {
            temp = temp->next;
            if (temp == NULL)
            {
                printf("\ncan't insert\n");
                return;
            }
        }
        ptr->next = temp->next;
        temp->next = ptr;
        printf("\nNode Inserted..\n");
    }
}

void beginDelete()
{
    struct node *ptr;
    if (head == NULL)
    {
        printf("\nList is enpty\n");
    }
    else
    {
        ptr = head;
        head = ptr->next; 
        free(ptr);
        printf("\nNode deleted from beginning\n");
    }
}

void lastDelete()
{
    struct node *ptr, *ptr1;
    if (head==NULL)
    {
        printf("\nList is empty\n");
    }
    else if(head->next == NULL)
    {
        head = NULL;
        free(head);
        printf("\nOnly node of the list is deleted..\n");
    }
    else 
    {
        ptr = head;
        while (ptr->next != NULL)
        {
            ptr1 = ptr;
            ptr = ptr->next;
        }
        ptr1->next = NULL;
        free(ptr);
        printf("\nDeleted Node from the last\n");
    }
}

void randomDelete()
{
    struct node *ptr, *ptr1;
    int loc, i;
    printf("\nEnter the location of the node after which you wanted to perform deletion\n");
    scanf("%d",&loc);
    ptr = head;
    for (i=0; i<loc; i++)
    {
        ptr1 = ptr;
        ptr = ptr->next;

        if (ptr == NULL)
        {
            printf("\nCan't delete\n");
            return;
        }
    }
        ptr1->next = ptr->next;
        free(ptr);
        printf("\nDeleted note at location: %d", loc+1);
}

void search()
{
    struct node *ptr;
    int item;
    int i=0, flag;
    ptr = head;
    if (ptr == NULL)
    {
        printf("\nThe List is empty\n");

    }
    else
    {
        printf("\nEnter the Item which you want to search?\n");
        scanf("%d",&item);
        while (ptr != NULL)
        {
            if (ptr->data == item)
            {
                printf("\nItem found at location: %d",i+1);
                flag=0;
            }
            else {
                flag = 1;
            }
            i++;
            ptr = ptr->next;
        }
        if (flag == 1)
        {
            printf("\nItem not found\n");
        }
    }
}

void display()
{
    struct node *ptr;
    ptr = head;
    if(ptr == NULL)
    {
        printf("\nNothing to print..");
    }
    else
    {
        printf("\nprinting values...\n");
        while(ptr != NULL)
        {
            printf("\n%d",ptr->data);
            ptr = ptr->next;
        }
    }
}