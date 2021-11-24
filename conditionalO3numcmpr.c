# include <stdio.h>
# include <conio.h>
 int main()
 {
     int a=50,b=10,c=20,max,min;
     max= (a>b? (a>c? a:c) : (b>c? b:c));// use trick ,only condition change
     min= (a<b? (a<c? a:c) : (b<c? b:c));
     printf("Maximum Value :%d",max);
     printf("\nMinimum Value :%d",min);
     return 0;
 }
