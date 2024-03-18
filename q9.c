#include<stdio.h>
int main(){
     int f;
     printf("Enter the fahrenheit\n");
     scanf("%d",&f);
     double degree= 0.5*(f-32);
     printf("%Lf \n",degree);

    return 0;

}