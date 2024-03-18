#include<stdio.h>
int main()
{
    short int a,b;
    printf("enter two numbers:\n");
    scanf("%hd%hd",&a,&b);
    short sum=a+b;
    short diff=a-b;
    short pro=a*b;
    printf("sum is :%hd \n",sum);
    printf("diff is :%hd\n",diff);
    printf("pro is :%hd \n",pro);
    return 0;
}