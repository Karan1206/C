#include<conio.h>
#include<stdio.h>
   int main()
   {
      // float c,f,a;
     //printf("Value tO Convert :");
     //printf("\nPress 1 to covert into Farenheit  Or Press O for vice versa");
     //scanf("%f",&a);
     //scanf("%f",&f);
    // a= f||0? printf("%f",f=c*(9/5.0)+32) : printf("\n%f",c=(f-32)*5/9.0);
    // return 0;
      float f,c;
      printf("\t\t\t\t**********Farenheit To Celsius**********\n\n");
      printf("Enter Tempraute In Farenheit :");
      scanf("%f",&f);
      c=(f-32)*5/9.0;
      printf("Celsius:%f",c);

      printf("\n\n\t\t\t\t**********Celsius To Farenheit**********");
      printf("\n\nEnter Temprautre In Celsius :");
      scanf("%f",&c);
      f=c*(9/5.0)+32;
      printf("Farenheit :%f",f);

      return 0;


   }