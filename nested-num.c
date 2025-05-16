#include<stdio.h>
int main(){
    struct aishwarya{
        int age[30];
        float weight;
    };
    struct shridevi{
        int marks[100];
        struct aishwarya aishu;
    };
    struct shridevi p1;
    printf("enter marks:");
    scanf("%d",&p1.marks);
     printf("enter age:");
    scanf("%d",&p1.aishu.age);
     printf("enter weight:");
    scanf("%f",&p1.aishu.weight);
    printf("\n shridevi details:\n");
    printf("marks:%d\nage:%d\nweight:%f\n,p1marks,p1 aishu age,p1aishu weight");
    return 0;
    
}
