
#include<stdio.h>
int main()
{
int year;
char month,mahina;
printf("Enter year:\n");
scanf("%d",&year);

printf("Enter month:\n");
scanf(" %c",&month);
enum month {jan,feb,mar,april,may,june,july,aug,sep,oct,nov,dec};
//printf("%d",mar);
if( month==0|| month==2|| month==4|| month==5|| month==7||month==11){
printf("number of days are 31\n");
}
else if((month==1)&& (year%4==0)||(year%100!=0)&&(year%400==0)  )
{
printf("number of days are 29");
}
else if(month==1){
printf("number of day are 28");
}
else{
printf("number of days are 30");
}
return 0;
}
