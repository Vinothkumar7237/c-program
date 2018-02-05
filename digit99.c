#include<stdio.h>
int main()
{
int n,i;
printf("enter the integer : \n");
scanf("%d",&n);
if(n>9 || n<-9)
{
for(i=0;i<10;i++)
{
if((n%(10^i))!=0)
}
printf("%d",i);
}
else
{
printf(1);
}
return 0;
}
