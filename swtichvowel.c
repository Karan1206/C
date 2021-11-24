#include<stdio.h>

int main()
{
 char ch;
 printf("\n Enter Alphabet : ");
 scanf("%c",&ch);
 switch(ch)
 {
  case 'a':
  case 'e':
  case 'i':
  case 'o':
  case 'u': printf("\n Vowel");
  break;
  default: 
  printf("Consonant");
  break;
  
 }
 return 0;
}