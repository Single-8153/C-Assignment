#include<stdio.h>
int main()
{
    int i, num;
     printf("enter the number:\n");
     scanf("%d",&num);

     for (int i=0 ;i<=10; i++)
     
     {
        printf("%d*%d=%d \n",i,num,(num*i));
     }
     return 0;

     
}
