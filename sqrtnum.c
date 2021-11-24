#include<stdio.h>
#include<math.h>
#include<conio.h>
 int main(){
     float num;
      printf("Enter  Number :");
      scanf("%f",&num);
      if(num>0)
          {
        num=sqrt(num);                //never put formula on else statement
       printf("Sqaure root :%f",num);
         
          

          }
      else 
       printf("Enter Positive No");
       
      
      return 0;

 }