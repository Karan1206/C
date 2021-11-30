#include<stdio.h>
int main()
{
    int arr[5];
    for(int i=0;i<5;i++)
    {
        printf("Enter Elements:");
        scanf("%d",arr[i]);
    }
    for(int i=0;i<5;i++)
    {
        printf("Elements are:");
        printf("%d",arr[i]);
    }

    return 0;
}
