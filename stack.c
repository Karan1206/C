#include<stdio.h>
int stack[100],choice,n,top,x,i;
void push();
void pop();
void peak();
void display();

int main() {
    top=-1;
    printf("\nEnter the size of stack[MAX=100]:");
    scanf("%d",&n);
    printf("\n\t STACK OPERATION USING ARRAY");
    printf("\n\t------------------------------");
    printf("\n\t 1.PUSH\n\t 2.POP\n\t 3.DISPLAY\n\t 4.EXIT");

    do
    {
        printf("\n Enter The Chocie:");
        scanf("%d",&choice);

        switch (choice)
        {
        case 1:
            
                push();
                break;
            
        case 2:
            
                pop();
                break;
            
        
        case 3:
            
                peak();
                break;
            
        case 4:
            
                display();
                break;
            
        case 5:
            
               printf("\n\t Exit Point");
                break;
            
            
        
        default:
        {
            printf("\n\t Please Enter a Valid Choice(1/2/3/4/5)");
        }

      }
    }
    
    while (choice!=5);
      return 0;

    
}

void push() 
{
    if(top>=n-1)
    {
        printf("\n\t Stack is Overflow");
    }
    
    else
    {
        printf(" Enter a value to be Pushed:");
        scanf("%d",&x);
        top++;
        stack[top]=x;
    }
}

void pop()
{
    if(top<=-1)
    {
        printf("Stack is under flow");
    }

    else
    {
      printf("\n\t The Popped element is: %d",stack[top]);
      top--;  
    }

}
void peak()
{
    if(top<=-1)
    {
        printf("Stack is under flow");
    }

    else
    {
      printf("\n\t The Peak element is %d",stack[top]);
        
    }

}


void display()
{
    if(top>=0)
    {
        printf("\n The elements in STACK \n");
        for(i=top; i>=0; i--)
            printf("\n%d",stack[i]);
        printf("\n Press Next Choice");
    }
    else
    {
        printf("\n The STACK is empty");
    }

}