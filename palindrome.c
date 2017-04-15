#include<stdio.h>
void main()
{
int sum=0,num,r,temp;
scanf("%d",&num);
temp=num;
while(num>0)
{
r=num%10;
num=num/10;
sum=(sum*10)+r;
}
if(temp==num)
{
printf("palindrome");
}
else
{
printf("not palindrome");
}
}
