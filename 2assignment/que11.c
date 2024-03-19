#include<stdio.h>
int main()
{int x,y;
printf("Enter x and y axis:\n");
scanf("%d%d",&x,&y);

if(x>0 && y>0)
{
printf("corodinates(%d,%d) lies in 1st quadrant",x,y);
}
else if(x<0 && y>0)
{
printf("corodinates(%d,%d) lies in 2nd quadrant",x,y);
}
else if(x<0 && y<0)
{
printf("corodinates (%d,%d) lies in 3rd quadrant",x,y);
}
else if(x>0 && y<0)
{
printf("cordinates(%d,%d) lies in 4th axis",x,y);
}
else if (x==0 && y==0)
{
printf("cordinates(%d,%d) lies at origin\n",x,y);
}
else
{
printf("corodinates are not real number");
}
return 0;
}
