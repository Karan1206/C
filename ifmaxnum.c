#include<stdio.h>
#include<math.h>
#include<conio.h>
 int main(){
     int a,b,c;
      printf("Enter  Number :");
      scanf("%d%d%d",&a,&b,&c);
      if(a>b)
          {
              if(a>c){
                  printf("A is greater :%d",a);
              }
              else
       
                  printf("C is greater:%d",c);
         
            }
      else 
               if(b>c){
                 printf("B is greater:%d",b);
                  }
                else
                  printf("C is greater:%d",c);
      
      return 0;

 }