#include<stdio.h>
int main(){
    int marks;
    printf("enter your marks:");
    scanf("%d",&marks);
    // check the pass and fail
    if(marks>=40){
         printf("pass\n");
    }else{
        printf("fail\n");
    }
    return 0;
}
   
