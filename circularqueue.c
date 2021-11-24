#include <stdio.h>



int queue[100],n,x,choice;
int front = -1, rear = -1;

int isFull() {
  if ((front == rear + 1) || (front == 0 && rear == n - 1)) return 1;
  return 0;
}

int isEmpty() {
  if (front == -1) return 1;
  return 0;
}


void enQueue() {
  if (isFull())
    printf("\n Queue is full!! \n");
  else {
    if (front == -1) front = 0;
    printf("\nEnter Element:");
    scanf("%d",&x);
    rear = (rear + 1) % x;
    queue[rear] = x;
    printf("\n Inserted -> %d", x);
  }
}


int deQueue() {
  int element;
  if (isEmpty()) {
    printf("\n Queue is empty !! \n");
    return (-1);
  } else {
    element = queue[front];
    if (front == rear) {
      front = -1;
      rear = -1;
    } 
    
    else {
      front = (front + 1) % n;
    }
    printf("\n Deleted element -> %d \n", element);
    return (element);
  }
}

// Display the queue
void display() {
  int i;
  if (isEmpty())
    printf(" \n Empty Queue\n");
  else {
    printf("\n Front -> %d ", front);
    printf("\n Items -> ");
    for (i = front; i != rear; i = (i + 1) % n) {
      printf("%d ", queue[i]);
    }
    printf("%d ", queue[i]);
    printf("\n Rear -> %d \n", rear);
  }
}

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