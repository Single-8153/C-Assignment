#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter numbers:");
    scanf("%d%d%d",&a,&b,&c);
    int avg=(a+b+c)/3;

    printf("%d",avg);
    return 0;
}