#include<stdio.h>
int main()
{
int i,a[50],n,lar;
printf("enter the number of terms :");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
printf("enter the %d term :",i);
scanf("%d",&a[i]);
}
lar=a[1];
for(i=1;i<=n;i++)
{
if(lar>a[i])
{
lar=a[i];
}
}
printf("%d",lar);
return 0;
}
