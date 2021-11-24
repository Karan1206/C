# include <stdio.h>
# include <conio.h>
    int main(){
        int num;
        printf("Enter  Number :");
        scanf("%d",&num);
        for(int i=0;i<num;i++){
            printf("\n%d",i+1);
        }
        return 0;
}