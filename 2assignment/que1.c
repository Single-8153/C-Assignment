#include<stdio.h>
int main()
{
int a,b,div;
printf("Enter the number:");
scanf("%d%d",&a,&b);
if(b!=0)
{
printf("a/b=%d \n",a/b);
}
else{
printf("appropriate error due to b=0");
}
return 0;
}
