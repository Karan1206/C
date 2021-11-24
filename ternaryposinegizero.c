#include<stdio.h>
#include<conio.h>
int main(){
    int a,num;
    printf("\t\t\t\t**********To Find Number is Postive,Negative or Zero**********");
    printf("\n\nEnter Any Number :");
    scanf("%d",&a);
    num=a>0?printf("Number is positive") : a<0? printf("Number is Negative") : printf("Number is zero");
    return 0;

}