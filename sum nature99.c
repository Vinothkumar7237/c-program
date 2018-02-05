#include<stdio.h>
int main()
{
int n,i,sum;
printf("enter the natural number upto which to add : \n");
scanf("%d",&n);
sum=0;
for(i=0;i<=n;i++)
{
sum=sum+i;
}
printf("the sum is %d",sum);
return 0;
}
