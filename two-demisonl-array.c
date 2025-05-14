#include<stdio.h>
int row,column;
   int aishu[2][3]={
       {1,2,3},
       {4,5,6}
   };
   
   int main(){
       for(int i=0;i<2;i++){
         for(int j=0;j<3;j++){
             printf("%d\n",aishu[i][j]);
             }
       }
   }
