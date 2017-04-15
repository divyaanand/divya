#include<stdio.h>
void main()
{
int m,n,num;
scanf("%d",&m);
scanf("%d",&n);
for(num=m;num<=n;num++)
{
if(num%2==1)
{
printf("\n%d",num);
}
}
}
