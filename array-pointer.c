#include<stdio.h>
int main(){
    int arr[10]={10,20,40,50,60},n=5,temp,*start,*end,i;
    start=arr;
    end=arr+n-1;
    while(start>end)
    {
    temp=*start;
    *start=*end;
    *end=temp;
    start ++;
    end --;
    }
    printf("revesed array");
    for(i=0;i<=5;i++){
        printf("%d ",(arr[i]));
         }
          return 0;
}
