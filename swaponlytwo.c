#include<stdio.h>
#include<conio.h>
 int main(){
     int a,b;
     printf("Enter First Value  :");
     scanf("%d",&a);
     printf("\nEnter Second Value :");
     scanf("%d",&b);
     printf("\nValues Before Swapping");
     printf("\nA=%d",a);
     printf("\nB=%d",b);
     a=a+b;
     b=a-b;
     a=a-b;
     printf("\nValues After Swapping");
     printf("\nA=%d",a);
     printf("\nB=%d",b);
     return 0;

 }