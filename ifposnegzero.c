#include<stdio.h>
#include<conio.h>
 int main()
 {
 
     int a;
     printf("Enter Value :");
     scanf("%d",&a);
      if(a>=0)
      {   
          if(a==0) {                                
      printf("Zero");
       }
        else
     printf("Positive");
       }
       else
       printf("Negative");
       return 0;
 }