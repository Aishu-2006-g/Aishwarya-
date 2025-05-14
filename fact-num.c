#include<stdio.h>
int i;
int aishu_fact(int n,int fact){
    if(n==0){
     return 0;
    }
    else if(n<0){
        printf("enter the positive nummber");
    }
    else{
        for(i=1;i<n;i++){
            fact*=i;
        }
    }
    return  fact;
}
int main(){
    int c;
    c=aishu_fact(5,1);
    printf("%d",c);
}

   
