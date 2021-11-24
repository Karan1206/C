# include <stdio.h>

    int main(){
        int num;
        printf("Enter The Number You Want The Multiplication Table Of:\n");
        scanf("%d",&num);
        for(int i=1;i<11;i++){
            printf("%d x %d= %d\n",num,i,i*num);
        }
        return 0;
}