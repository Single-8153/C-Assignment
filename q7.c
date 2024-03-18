#include<stdio.h>
int main()
{
     int input,num,a,d;
     printf("enter the number:\n");
     scanf("%d",&num);
     //num=num%10;
     //printf("%d",num);
    

    for (int i = 0; i < 4; i++)
    {
        
        printf("%d",input%10);
        input = input/10;
        /* code */
    }
    

    return 0;

}