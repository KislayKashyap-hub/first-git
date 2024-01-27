#include<stdio.h>

int main(){
    int m1,m2,m3,m4;
    printf("Enter number 1");
    scanf("%d",&m1);
    printf("Enter number 2");
    scanf("%d",&m2);
    printf("Enter number 3");
    scanf("%d",&m3);
    printf("Enter number 4");
    scanf("%d",&m4);
    if (m1>m2)
    {
        if (m1>m3)
        {
            printf("%d is greater",m1);
        }
        else{
            printf("%d is greater",m3);
        }
    }
    else if (m2>m3)
    {
        if (m2>m4)
        {
            printf("%d is greater",m2);
        }
        else{
            printf("%d is greater",m4);
        }
    }
    else if (m3>m4)
    {
        printf("%d is greater",m3);
    }
    else{
        printf("%d is greater",m4);
    }
    return 0;    

}