# include <stdio.h>

    int main(){
        int num,sum=0;
        printf("Enter The Number :\n");
        scanf("%d",&num);
        for(int i=1;i<num;i++){
            sum=sum+i;
        } // if u will put this bracket after printf it will show line by line result
            printf("Sum=%d\n",sum);
        
        return 0;
    }