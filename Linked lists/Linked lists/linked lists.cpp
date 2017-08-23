
#include <stdio.h>
#include<iostream>
#include <stdlib.h>

struct listNode{
char data;
struct listNode *nextPtr;
};

typedef struct listNode ListNode;
typedef ListNode *ListNodePtr;

void insert(ListNodePtr *sPtr, char value);
char deletep(ListNodePtr *sPtr, char value);
int isEmpty(ListNode sPtr);
void printList(ListNodePtr currentPtr);
void instructions(void);

int main(void)
{
    ListNodePtr startPtr;
    int choice;
    char item;
    instructions();
    printf("?");
    scanf("%d",&choice);

    while(choice!=3)
    {
        switch(choice)
        {
        case 1:
            printf("Enter a Character");
            scanf("\n%c",&item);
            insert(&startPtr,item);
            printList(startPtr);
            break;
        case 2:
            if(startPtr!=0)
            {
                printf("Enter a Character to be deleted: ");
                scanf("\n%c",&item);
                if(deletep(&startPtr,item))
                {
                    printf("%c deleted.\n",item);
                    printList(startPtr);
                }
                else
                {
                    printf("%c Not found",item);
                }
            }
            else
            {
                printf("List is Empty\n\n");
            }
            break;
        default:
            printf("Invalid Choice\n\n");
            instructions();
            break;
        }
        printf("?");
        scanf("%d",&choice);
    }
    printf("End of Run\n\n");
    return 0;
}


void instructions(void)
{
    printf("Enter Your Choice\n"
           "1. To Insert an Element into the List\n"
           "2. To deletep an Item from the List\n"
           "3. To End.\n\n");
}

void insert(ListNodePtr *sPtr, char value)
{
    ListNodePtr newPtr;
    ListNodePtr previousPtr;
    ListNodePtr currentPtr;
	
    newPtr = malloc(sizeof(ListNode));
    if(newPtr !=NULL)
    {
        newPtr->data=value;
        newPtr->nextPtr=NULL;

        previousPtr=NULL;
        currentPtr=*sPtr;

        while(currentPtr!=NULL && value> currentPtr->data)
        {
            previousPtr=currentPtr;
            currentPtr=currentPtr->nextPtr;
        }
        if(previousPtr==NULL)
        {
            newPtr->nextPtr=*sPtr;
            *sPtr=newPtr;
        }
        else
        {
            previousPtr->nextPtr=newPtr;
            newPtr->nextPtr=currentPtr;
        }
    }
    else
    {
        printf("%c not inserted. No memory available");
    }
}

char deletep(ListNodePtr *sPtr, char value)
{
    ListNodePtr previousPtr;
    ListNodePtr currentPtr;
    ListNodePtr tempPtr;

    if(value==(*sPtr)->data)
    {
        tempPtr=*sPtr;
        *sPtr=(*sPtr)->nextPtr;
        free(tempPtr);
        return value;
    }

    else
    {
        previousPtr=*sPtr;
        currentPtr=(*sPtr)->nextPtr;
        while(currentPtr!=NULL && currentPtr->data != value)
        {
            previousPtr=currentPtr;
            currentPtr=currentPtr->nextPtr;
        }

        if(currentPtr !=NULL)
        {
            tempPtr=currentPtr;
            previousPtr->nextPtr=currentPtr->nextPtr;
            free(tempPtr);
            return value;
        }
    }
    return '\0';
}

int isEmpty(ListNodePtr sPtr)
{
    return sPtr==NULL;
}

void printList(ListNodePtr currentPtr)
{
    if(currentPtr==NULL)
    {
        printf("List is Empty.\n\n");
    }
    else
    {
        printf("The List is:\n");
        while(currentPtr!=NULL)
        {
            printf("%c -->",currentPtr->data);
            currentPtr=currentPtr->nextPtr;
        }
        printf("NULL\n\n");
    }
}
