#include <stdio.h>

int items[100], front = -1, rear = -1,choice,x,i,n;

void enQueue();
void deQueue();
void display();



int main() {
  printf("\nEnter the size of Queue[MAX=100]:");
  scanf("%d",&n);

  printf("\n\t STACK OPERATION USING ARRAY");
  printf("\n\t------------------------------");
  printf("\n\t 1.EnQueue\n\t 2.DeQueue\n\t 3.DISPLAY\n\t 4.EXIT");
  
do
    {
        printf("\n Enter The Chocie:");
        scanf("%d",&choice);

        switch (choice)
        {
        case 1:
            
                enQueue();
                break;
            
        case 2:
            
                deQueue();
                break;
            
        
        
        case 3:
            
                display();
                break;
            
        case 4:
            
               printf("\n\t Exit Point");
                break;
            
            
        
        default:
        {
            printf("\n\t Please Enter a Valid Choice(1/2/3/4/5)");
        }

      }
    }
    
    while (choice!=4);
      return 0;

    
}
  

void enQueue() {
  if (rear == n - 1)
    printf("\nQueue is Full!!");
  else {
    if (front == -1)
    front = 0;
    printf("\nEnter Element:");
    scanf("%d",&x);

    rear++;
    items[rear] = x;
    printf("\nInserted -> %d", x);
  }
}

void deQueue() {
  if (front == -1)
    printf("\nQueue is Empty!!");
  else {
    printf("\nDeleted : %d", items[front]);
    front++;
    if (front > rear)
      front = rear = -1;
  }
}


void display() {
  if (rear == -1)
    printf("\nQueue is Empty!!!");
  else {
    int i;
    printf("\nQueue elements are:\n");
    for (i = front; i <= rear; i++)
      printf("%d  ", items[i]);
  }
  printf("\n");
}