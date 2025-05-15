#include<stdio.h>
int main(){
    int num,result,original, remainder;
    printf("enter the number:");
    scanf("%d",&num);
         
    original=num;
    while(num!=0){
        remainder =num%10;
        result+=remainder*remainder*remainder;
       num/=10;
    }
    if(result==original){
        printf("%d is armstrong");
    }
    else{
        printf("%d is not armstrong ");
        
    }
}
