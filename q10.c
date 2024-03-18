x#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    printf("Enter the side of triangel:");
    scanf("%d%d%d",&a,&b,&c);
    int peri= a+b+c*a+b+c;
     int s= (a+b+c)/2;
    int area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("Area of triangel=%d\nPerimeter of triangle= %d\n",area, peri);
    return 0;

}