#include<stdio.h>
#include<conio.h>
 int main(){
     int a,b,t;
     printf("Enter First Value  :");
     scanf("%d",&a);
     printf("\nEnter Second Value :");
     scanf("%d",&b);
     printf("\nValues Before Swapping");
     printf("\nA=%d",a);
     printf("\nB=%d",b);
     t=a;
     a=b;
     b=t;
     printf("\nValues After Swapping");
     printf("\nA=%d",a);
     printf("\nB=%d",b);
     return 0;

 }