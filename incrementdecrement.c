#include<stdio.h>
#include<conio.h>
 int main(){
  int i,j;
  printf("Enter Any Digit :");
  scanf("%d",&i);
  printf("\nPrefix Increment");
  j=++i;
  printf("\nOutput :%d",j);
  printf("\nPrefix Decrement");
  j=--i;
  printf("\nOutput :%d",j);
  printf("\nPostfix Increment");
  j=i++;
  printf("\nOutput :%d",j);
  printf("\nPostfix Decrement");
  j=i--;
  printf("\nOutput :%d",j);
  return 0;
 }