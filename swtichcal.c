#include<stdio.h>

int main()
{
 int a,b;
 char op;
 printf("Format Used : A+b(Operator:+,-,*,/");
 printf("\n Enter Digits with operator  : ");
 scanf("%d%c%d",&a,&op,&b);
 switch(op)
 {
  case '+':
   printf("\n Addition=%d",a+b); //forgot to put %d & have not given output of a+b
   break;
  case '-':
   printf("\nSubtraction=%d",a-b);
   break;
  case '*':
   printf("\nMultiplication=%d",a*b);
   break;
  case '/':
   printf("\nDivision=%d",a/b);
   break;
  
  default:
   printf("\n Please Enter Proper Input");
   break;
 }
 return 0;
}