# include <stdio.h>
 int main(){
     int i,num,cout;
     
     for(num=1;num<=100;num++){
         cout=0;// shlud be within the loop still need to work
     for (i=2;i<=num/2;i++){
         if(num%i==0){ 
             cout++;                         //You Make too much error while creating this prgm
             break;
         }
     }
     if(cout==0&&num !=1){
         printf("\n%d",num);
     }
     }
     return 0;
 }

   