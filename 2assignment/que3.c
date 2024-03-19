#include<stdio.h>
int main()
{
int num;
printf("Enter the number:");
scanf("%d",&num);
if(num>0)
{
printf("Number %d is +ve  integer",num);
 }

else if(num==0)
{
printf("Number %d is zero",num);
}
else{
printf("Number %d is -ve interger",num);
}


return 0;

}
