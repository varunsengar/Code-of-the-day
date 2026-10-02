#include<stdio.h>
int main()
{
    float k,m;
    printf("enter distance in kilometers: ");
    scanf("%f",&k);
    m=k*0.621;
    printf("distance in miles: %f",m);
     printf("\nenter distance in miles: ");
     scanf("%f",&m);
    k=m/0.621;
    printf("distance in kilometers: %f",k);

    return 0;
}