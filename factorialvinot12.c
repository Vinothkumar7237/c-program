#include<stdio.h>
int main()
{
int num,sum,i;
printf("enter the number");
scanf("%d",&num);
sum=1;
for(i=1;i<=num;i++)
{
sum=sum*i;
}
printf("%d",sum);
return 0;
}
