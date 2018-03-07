#include<stdio.h>
int main()
{
int a[50],i,large=0,num;
printf("enter the number of arrays  :\n");
scanf("%d",&num);
for(i=1;i<=num;i++)
{
printf("enter the array%d value  : \n");
scanf("%d",&a[i]);
}
for(i=1;i<=num;i++)
{
if(large<a[i])
{
large=a[i];
}
}
printf("the largest number is %d",large);
return 0;
}
