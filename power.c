#include<stdio.h>
void main()
{
long long result=1;
int exponent,base;
printf("enter the base");
scanf("%d",&base);
printf("enter the exponent");
scanf("%d",exponent);
while(exponent!=0)
{
result=result*base;
--exponent;
}
printf("power of num is=%lld",result);
}
