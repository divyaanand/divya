#include<stdio.h>
void main()
{
int num,count=0,i;
scanf("%d",&num);
for(i=2;i<=num/2;i++)
{
if(num%i==0)
{
count++;
}
}
if(count==0&&num!=1)
{
printf("prime");
}
else
{
printf("not prime");
}
}
