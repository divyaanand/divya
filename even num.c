#include<stdio.h>
main()
{
int m,n,num;
scanf("%d",&m);
scanf("%d",&n);
for(num=m;num<=n;num++)
{
if(num%2==0)
printf("%d",num);
}
}
