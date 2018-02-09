#include<stdio.h>
int main()
{
int num1,num2,i,odd;
printf("enter the interval");
scanf("%d%d",&num1,&num2);
for(i=num1;i<num2;i++)
{
odd=i%2;
if(odd!=0)
{
printf("%d",i);
}
}
return 0;
}
