#include<stdio.h>
int main()
{
int i,a[50],n,lar=0;
printf("enter the number of terms :");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
printf("enter the %d term :",i);
scanf("%d",&a[i]);
}
for(i=1;i<=n;i++)
{
if(lar<a[i])
{
lar=a[i];
}
}
printf("%d",lar);
return 0;
}
