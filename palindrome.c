#include<stdio.h>
void main()
{
int sum=0,num,r;
printf("enter the number");
scanf("%d",&num);
while(num>0)
{
r=num%10;
n=num/10;
sum=(sum*10)+r;
}
if(num==sum)
{
printf("palindrome");
}
else
{
printf("not palindrome");
}
}
