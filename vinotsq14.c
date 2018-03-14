#include<stdio.h>
int main()
{
int num,i,a;
printf("enter the number :");
scanf("%d",&num);
for(i=1;i<=50;i++)
{
a=2^i;
if(a==num)
{
printf("yes");
}
}
return 0;
}
