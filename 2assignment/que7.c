#include<stdio.h>
int main()
{
int year;
printf("Enter the number:\n");
scanf("%d",&year);
//A.
if(year%4==0){
printf("%d is a leap year\n",year);
}
else if(year%100!=0)
{
printf("%d is not a leap year \n",year);
}
else if(year % 400==0){
printf("%d is leap year\n",year);
}
else
{
printf("invalied year");
}


// B.
if(year % 4==0 && year %100!=0 || year % 400==0)
{
printf("%d is a leap year\n");

}
else
{
printf("%d is not a leap year\n");
}
// C.

year=((year%4==0) && (year %100!=0)|| (year %400 ==0))?printf("%d year is a leap year\n",year):printf("%d year is not a leap year",year); 
return 0;
}
