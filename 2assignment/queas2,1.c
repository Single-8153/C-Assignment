
#include<stdio.h>
int main()
{
int month;
 int year,days ;
printf("Enter the month\n");
scanf("%d",&month);
printf("Enter the year\n");
scanf("%d",&year);
//enum month{jan,feb,mar,april,may,june,july,aug,sep,oct,nov,dec};
switch(month)
{
case 1:
case 3:
case 5:
case 7:
case 8:
case 10:
case 12:
days=31;
break;
 case 4:
case 6:
case 9:
case 11:
days=30;
break; 
case 2:
days=28;
default:
printf("invalid month");
}
printf("number of days in %d in %d is\n",days,month);
return 0;
}
