#include <stdio.h>
int main()
{
int i,num,pow,ans;
printf("enter the number and the power value : ");
scanf("%d%d",&num,&pow);
ans=1;
for(i=1;i<=pow;i++)
{
ans=ans*num;
}
printf("the value is:%d",ans);
return 0;
}
