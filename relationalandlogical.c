#include<conio.h>
#include<stdio.h>

   int main()
   {
       int a,b,c;
    printf("\t\t\t\t----------Relational And Logical Operators----------");
    printf("\n\nEnter First Digit   :");
    scanf("%d",&a);
    printf("\n\nEnter Second Digit  :");
    scanf("%d",&b);
    c=a>=b||a<=b;
    printf("\n1 means True & 0 means False");
    printf("\nIS A is greater than B? : %d",c);
    c=a>=b&&a==b;
    printf("\nIs A is equal to B : %d",c);
    
    
   
   
   
    return 0;

   }