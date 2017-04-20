#include<stdio.h>
main()
{
int a,n,temp,c=0;
scanf("%d",&n);
temp=n;
while(n>0)
{
a=n%10;
n=n/10;
c=c+(a*a*a);
}
if(temp==c)
printf("armstron number");
else
printf("not armstrong number");
}

