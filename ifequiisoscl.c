#include<stdio.h>
#include<conio.h>
 int main()
 {
 
     int a,b,c;
     printf("Enter the sides :");
     scanf("%d%d%d",&a,&b,&c);
      if(a==b&&b==c)
      {                                       // a==b==c is wrong format
      printf("Equilateral");
       }
       else if(a==b||b==c||a==c){
     printf("Isosceles");
       }
       else
       printf("Scalene");
       return 0;
 }