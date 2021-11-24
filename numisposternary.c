#include<stdio.h>
#include<conio.h>
int main(){
    int a,num;
    printf("\t\t\t\t**********To Find Number is Postive Or Not**********");
    printf("\n\nEnter Any Number :");
    scanf("%d",&a);
    num=a>0?printf("Number is positive") : printf("Number is Not Positive");
    return 0;

}