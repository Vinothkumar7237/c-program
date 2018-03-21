#include<stdio.h>
int main()
{
int num,a,b,c,d;
printf("enter the three number : ");
scanf("%d",&num);
a=num%100;
b=a/10;
c=num/100;
d=num%10;
printf("%d",c+b+d);
return 0;
}
