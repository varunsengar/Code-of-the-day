#include<stdio.h>
int main()
{
    int maths,physics,chemistry,english,hindi;
    printf("enter physics marks:");
    scanf("%d",&physics);
     printf("enter chemistry marks:");
    scanf("%d",&chemistry);
     printf("enter maths marks:");
    scanf("%d",&maths);
     printf("enter english marks:");
    scanf("%d",&english);
     printf("enter hindi marks:");
    scanf("%d",&hindi);
float percentage=(maths+physics+chemistry+english+hindi)/5;
printf("total percentage:%f",percentage);
float sum=maths+physics+chemistry+english+hindi;
printf("\ntotal sum:%f",sum);
    
    return 0;
}