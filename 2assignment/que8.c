#include<stdio.h>
int main()

{
int price, num,p1,p2,dis,dis2,og,og2;
printf("Enter quantity:\n");
scanf("%d",&num);
if(num>= 30)
{

 p1=5*num;
 dis=(p1*10)/100;
 og= p1-dis;
printf("price of quantity after discount is %d",og);
}
else if(price>=50){

 p2=5*num;
 dis2=(p1*15)/100;
 og2= p1-dis;
printf("price of quantity after discount is %d\n ",og2);
}

return 0;

}
