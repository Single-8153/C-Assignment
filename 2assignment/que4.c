#include<stdio.h>
int main()
{
int max, a,b;
printf("Enter the number:\n");
scanf("%d%d",&a,&b);
// A.
if(a>b)
{
printf("%d is greatest number\n",a);
}
else{
printf("%d is greatest number\n",b);
}

//B.
max=((a>b)?printf("%d is maximum\n",a):printf("%d is maximum\n",b));
return 0;
}





