#include<stdio.h>
#include<conio.h>
 int main(){
     int a=-3;
     int b=29;
     int i=11;
     int j=16;
      b=(++i || ++j) && a++; // || if only fisrt value is true  result = true(1)
                             // && if only fisrt value is flase reuslt = false(0)
      printf("%d",b);
      return 0;
 }