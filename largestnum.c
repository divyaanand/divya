#include<stdio.h>
void main()
{
int a,b,c;
scanf("%d",&a,&b,&c);
if(a>b&&a>c)
printf("a is greatest");
if(b>a&&b>c)
printf("b is greatest");
if(c>a&&c>b)
printf("c is greatest");
}
