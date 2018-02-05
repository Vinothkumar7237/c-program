#include<stdio.h>
int main()
{
int i,sum,n,k,a[50];
printf("enter the two numbers : \n");
scanf("%d%d",&n,&k);
printf("enter the values:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
sum=k+a[0];
printf("the sum is %d",sum);
return 0;
}
