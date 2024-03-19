#include<stdio.h>
int main()
{
int a,b, res;
int op;
printf("Enter the numbers:\n");
scanf("%d%d",&a,&b);
printf("Enter the operation:");
scanf("%d",&op);

switch(op)
{
   case'+' : res=a+b;
    printf("%d",res);
break;
   case '-': res =a-b;
   printf("%d",res);
break;
   case '/': if(b!=0)
{
res=a/b;
printf("%d", res);
}
break;
case '*': res= a*b;
printf("%d",res);
break;
default:
printf("Invalid operation");
}

return 0;

}
