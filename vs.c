#include<stdio.h>
int max();
void main()
{   
    int maxi;
    
    maxi= max();
    printf("\n  maximum %d :",maxi);
}

int max()
{
    int a,b;
    printf("Enter Two numbers : ");
    scanf("%d%d",&a,&b);
    if (a>b)
    {
        // printf("\n A is maximum %d :",a);
        return a;
    }
    else
    {
       // printf("\n B is maximum %d :",b);
        return b;
    }
    
}
