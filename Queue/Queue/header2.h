#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
struct customer
{
    char accountNumber[10];
    int priority;
};
typedef struct customer CUSTOMER;
int HEAPSIZE;
int currentPosition;
CUSTOMER customerHeap[50];

void startHeap(int heapSize)
{
  HEAPSIZE = heapSize;
  currentPosition = 0;
  customerHeap[0].priority= -5;
  strcpy(customerHeap[0].accountNumber, "emptySlot");
}
CUSTOMER insertInHeap(CUSTOMER bank)
{
        currentPosition ++;
		customerHeap[currentPosition] = bank;
		int rightnow = currentPosition;
        while(customerHeap[rightnow/2].priority > bank.priority)
        {
			customerHeap[rightnow] =customerHeap[rightnow/2];
                rightnow /= 2;
        }
		customerHeap[rightnow] = bank;
}

CUSTOMER deleteMinimumelement()
{
	CUSTOMER minimumElement,lastElement;
        int minimumChild,rightnow;
        minimumElement =  customerHeap[1];
        lastElement = customerHeap[currentPosition--];
		       for(rightnow = 1; rightnow*2 <= currentPosition ; rightnow = minimumChild)
        {
			minimumChild = (rightnow*2);
	if(minimumChild != currentPosition && customerHeap[minimumChild+1].priority < customerHeap[minimumChild].priority )
             {
                  minimumChild++;
			}
	                if(lastElement.priority > customerHeap[minimumChild].priority)
                {
                        customerHeap[rightnow] = customerHeap[minimumChild];
                }
					 else
                {
                        break;
                }
        }
       customerHeap[rightnow] = lastElement;
        return minimumElement;
}
