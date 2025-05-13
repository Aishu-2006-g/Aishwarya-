#include<stdio.h>
int add(int a,int b)   //function declartion
{
    int c=a+b;        //function defintion
    return c;
}
int main()
{
    int result=add(5,10);    // fuction calling
    printf("result is:%d",result);
    return 0;
}
