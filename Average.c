#include<stdio.h>
#include<conio.h>

    int main()
    {
    int a,b,c;
      float avg;
           printf("Enter Your First Digit : ");
           scanf("%d",&a);
           printf("\nEnter Your Second Digit : ");
           scanf("%d",&b);
           printf("\nEnter Your Third Digit : ");
           scanf("%d",&c);
           avg=a+b+c/3.0;
           printf("\n Average Of Three No Is :%f", avg);
           return 0;
}