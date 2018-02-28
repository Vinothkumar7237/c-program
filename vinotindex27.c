#include<stdio.h>
int main()
{
int i,num,a[50];
printf("enter the number of arrays :");
scanf("%d",&num);
for(i=0;i<num;i++)
{
printf("enter the array%d value :",i);
scanf("%d",&a[i]);
  }
  for(i=0;i<num;i++)
  {
  printf("%d  %d\n",a[i],i);
  }
  return 0;
  }
