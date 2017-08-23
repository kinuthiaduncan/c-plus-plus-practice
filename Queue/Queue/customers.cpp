#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "header.h"
#include "header2.h"
#define SIZE 500
int main()
{
   CUSTOMER customerIn;
   CUSTOMER customerOut;
   int total,i,choice;
   static int k=0;
   NODE frontNode=0;
   NODE backNode=0;
   printf("What is the highest number of patients you are working with?: ");
   scanf("%d",&total);
   if(total <= 5)
   {
      while(1)
     {
       printf("1 add to the queue\n");
       printf("2 delete from queue\n");
       printf("3 display all elements\n");
       printf("4 to exit\n");
       scanf("%d",&choice);
       switch(choice)
       {
		   case 1:
        k+=1;
        if(k<=total)
        {
         backNode=pushInQueue(backNode);
         if(frontNode==NULL)
        {
         frontNode=backNode;
        }
        }
        else
        {
          printf("You have entered the possible maximum entries\n");
        }
        break;

		case 2:
             k-=1;
            printf("%s\n",frontNode->data);
            frontNode = popQueue(frontNode, backNode);
            break;

        case 3:
           displayQueue(frontNode);
           break;

        case 4:
            exit(0);
        default:
            break;
      }
    }
   }

	else
   {
     startHeap(total);
     while(1)
      {
		  printf("1: Add  a Customer to the queue\n");
		  printf("2: Serve a Customer\n");
		  printf("3: Display all Customers\n");
		  printf("4: exit\n");
           scanf("%d",&choice);
		switch(choice)
           {
            case 1:
            printf("Enter Account Number: ");
            scanf("%s",customerIn.accountNumber);
            printf("\n");
            printf("Enter the customer Priority: ");
            scanf("%d",&customerIn.priority);
            printf("\n");
            insertInHeap(customerIn);
            break;
			case 2:
                printf("Customer being served: ");
                customerOut = deleteMinimumelement();
                printf("%s\n",customerOut.accountNumber);
                break;
			case 3:
                printf("All Customers present in the queue\n");
                for(i=1;i<=total;i++)
                {
                    printf("%d\t\t%s\n",customerHeap[i].priority,customerHeap[i].accountNumber);

                }
                break;
				case 4:
                exit(0);
            default:
                break;
         }
      }
   }
return 0;
}
