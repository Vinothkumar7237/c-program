#include<stdio.h>
int main()
{
int n,num,a,e,b,c,d;
printf("enter the number");
scanf("%d",&num);
while(num!=0)
{
num/10=0;
n++;
}
a=num%10;
b=num%100;
c=b/10;
d=num/100;
e=a^n+c^n+d^n;
if(num==e)
{
printf("armstrong");
}
else
{
printf("not");
}
return 0;
}
