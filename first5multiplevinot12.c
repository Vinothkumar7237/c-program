#include<stdio.h>
int main()
{
int num,i,ans;
printf("enter the number");
scanf("%d",&num);
for(i=1;i<=5;i++)
{
ans=num*i;
printf("%d\n",ans);
}
return 0;
}
