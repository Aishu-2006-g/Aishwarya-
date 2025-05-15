#include<stdio.h>
int main(){
    int num,reversed=0,original, remainder;
    printf("enter the number:");
    scanf("%d",&num);
    original=num;
    while(num!=0){
        remainder =num%10;
        reversed=reversed*10+remainder;
    num/=10;
    }
    if(reversed==original){
        printf("%d is palidrome");
    }
    else{
        printf("%d is not palidrome ");
        
    }
}
