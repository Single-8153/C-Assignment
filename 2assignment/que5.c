#include<stdio.h>
int main()
{
int max, a,b,c;
printf("Enter the number:\n");
scanf("%d%d%d",&a,&b,&c);
//A.
if(a>c && a>c){
printf("%d is maximun\n",a);
}
else if(b>c)
{
printf("%d is maximum\n",b);
}
else{
printf("%d is maximum\n",c);

}

//B.
max=(a>b)?((a>c)?a:c)((b>c)?b:c);


return 0;
}
