#include<stdio.h>
int main()
{
int num;
int rev;
printf("Enter a number\n");
scanf("%d",&num);
int temp=num;
for (int i=temp;i>0;)
{
int rev=0,rem;
rem=num%10;
rev=rev*10+rem;
num=num/10;
}
if(temp==rev)
{
printf("Number %d is a palindrome number",rev);
}
else
{
printf("Number %d is not a palindrome number",rev);
}

return 0;
}
