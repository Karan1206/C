#include<stdio.h>
#include<string.h>
 void push(char stack[], int*a,char val)
 {
     stack[*a]= val;
 }

 void top(char stack[], int*a)
 {
     printf("%c",stack[*a]);
 }

 void pop(char stack[], int*a)
 {
     *a = *a-1;
 }

 int main(void)
 {
     char stack[100];
     int a= -1;
     char s[]="CODING";
     int i;

     for ( i = 0; i<6; i++)
     {
        
        push(stack,&i,s[i]);
     }
     a = i-1;
     while(a >=0)
     {
         top(stack,&a);
         pop(stack,&a);

     }

     return 0;
     
 }