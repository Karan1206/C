/*#include<stdio.h>
# include<conio.h>
  int main(){
      int i; int num;
      scanf("%d",&i);
      scanf("%d",&num);
       for(i;i>=num;i--)
       {
           printf("%d",i);
       }
       return 0;

  }*/
 #include <stdio.h>
int main() {
    int n, rev = 0, remainder;
    printf("Enter an integer: "); //formual (n-[n/10]*10)
    scanf("%d", &n);
    while (n != 0) {
        remainder = n % 10;
        rev = rev * 10 + remainder;
        n /= 10;
    }
    printf("Reversed number = %d", rev);
    return 0;
}



