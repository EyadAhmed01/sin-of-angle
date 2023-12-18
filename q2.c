#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
float x,sum,sin;
int n,factorial=1,sign=-1,i;
printf("enter number of terms\n");
scanf("%d",&n);
printf("enter the angle in degrees\n");
scanf("%f",&x);
x=x*3.14/180;
sum=x;
for(i=3;i<=n;i=i+2){
    factorial=factorial*i*(i-1);
    sum=sum+sign*pow(x,i)/factorial;
    sign=-sign;
}
sin=sum;
printf("The Sin Of Your Angle Is %f",sin);
}
