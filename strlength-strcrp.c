#include<stdio.h>
#include<string.h>
int main(){
    char name[20];
    printf("enter the name");
    scanf("%s ",&name);
    int length= strlen(name);
    printf("%d\n",length);
    strcpy(name,"aishwarya");
    printf("%s\n",&name);
    int compare=strcmp("array","aishwarya");
    printf("%d",compare);
    
    return 0;
}
