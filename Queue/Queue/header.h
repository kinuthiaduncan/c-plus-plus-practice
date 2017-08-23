#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct queueNode
{
    char data[10];
    struct queueNode* nextNode;
};
typedef struct queueNode* NODE;

NODE pushInQueue(NODE reNode)
{
    char queueData[10];
    NODE newNode;
    newNode=(NODE)malloc(sizeof(struct queueNode));

	printf("Enter Customer Number : ");
    scanf("%s",newNode->data);
    printf("\n");
	 newNode->nextNode=NULL;
	 if(reNode!=NULL)
    {
        reNode->nextNode=newNode;
    }
    reNode=newNode;
    return reNode;
}
NODE popQueue(NODE firstNode, NODE reNode)
{
    if(firstNode==NULL)
    {
        printf("Queue is empty\n");
    }
    else
    {
        printf("Customer to serve: %s\n",firstNode->data);
        if(firstNode!=reNode)
        {
			firstNode=firstNode->nextNode;
        }
        else
        {
           firstNode=NULL;
        }
    }
    return firstNode;
}
void displayQueue(NODE firstNode)
{
    if(firstNode==NULL)
    {
        printf("The Queue is Empty\n");
    }
    else
    {
        printf("Customers Waiting \n");
        while((firstNode->nextNode!=NULL))
        {
			printf("%s\n",firstNode->data);
            firstNode=firstNode->nextNode;
        }
        printf("%s\n",firstNode->data);
    }
}
