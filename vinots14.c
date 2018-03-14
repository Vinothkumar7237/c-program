#include<stdio.h>
int main()
{
int num,a[50],lar,smal,i;
printf("enter the number of arrays:");
scanf("%d",&num);
printf("enter the array values: ");
for(i=1;i<=num;i++)
{
scanf("%d",&a[i]);
}
lar=a[1];
smal=a[1];
for(i=1;i<=num;i++)
{
if(lar<a[i])
{
lar=a[i];
}
if(smal>a[i])
{
smal=a[i];
}
}
printf("the largest and smallest numbers are %d and %d.",lar,smal);
return 0;
}
