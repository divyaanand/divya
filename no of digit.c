#include<stdio.h>
void main()
{
int count=0,temp,n,;
scanf("%d",&n);
temp=count;
while(n>0)
{
count++;
n=n/10;
}
printf("no of integer=%d",temp,count);
}
