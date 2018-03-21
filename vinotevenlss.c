#include<stdio.h>
int main()
{
int num,n;
printf("enter the number: ");
scanf("%d",&num);
n=num%2;
if(n==0)
{
printf("%d",num);
}
else
{
printf("%d",num-1);
}
return 0;
}
