#include<stdio.h>
#include<conio.h>
  int main(){
      char ch;
      printf("Enter Alphabet :");
      scanf("%c",&ch);
       if(ch=='a'||ch=='i'||ch=='e'||ch=='o'||ch=='u'){  //use== for comparing
           printf("Vowel");

       }
       else if(ch>='0'&&ch<='9'){ //you forgot to put '' this plz rember
           printf("Only Alphabets"); //it will think of ascii
       }

       else
       printf("Consonant");
       return 0;

  }