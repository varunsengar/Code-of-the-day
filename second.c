#include<stdio.h>
#include<math.h>
int main()
{
   float p,r,t,si,ci,a;
     printf("enter principal: ");
     scanf("%f",&p);
     printf("enter rate: ");
     scanf("%f",&r);
     printf("enter time: ");
     scanf("%f",&t);
      


     si = (p*r*t)/100;
     printf("your simple interest is: %f",si);

     a=p*pow(1+r/100,t);
     ci=a-p;
     printf("\nyour compound interest is: %f",ci);


 
    return 0;
}