#include<stdio.h>
int main(){
    int x=20,y=80,z;
    int *ptr1=&x;
    int *ptr2=&y;
    printf("before swap x=%d y=%d\n",x,y);
    z=*ptr1;
    *ptr1=*ptr2;
   *ptr2=z;
    printf("after swaping x=%d y=%d" ,x,y);
    return 0;
}
