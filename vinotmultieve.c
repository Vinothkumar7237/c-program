#include<stdio.h>
int main()
{
int num,n;
printf("enter the number: ");
scanf("%d",&num);
n=num%2;
if(n==0)
{
printf("even");
}
else
{
printf("odd");
}
return 0;
}
