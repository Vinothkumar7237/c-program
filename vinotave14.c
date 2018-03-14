#include<stdio.h>
int main()
{
int num,a[50],b,c,i;
printf("enter the number of arrays : ");
scanf("%d",&num);
for(i=1;i<=num;i++)
{
scanf("%d",&a[i]);
}
b=0;
for(i=1;i<=num;i++)
{
b=a[i]+b;
}
c=b/num;
printf("the average is %d",c);
return 0;
}

