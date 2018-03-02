#include<stdio.h>
int main()
{
int h,m,hh,mm,b,a,c,hr,min;
printf("enter time from which to subtract hr. and min.  :");
scanf("%d%d",&h,&m);
printf("enter time to subtract hr. and min.  :");
scanf("%d%d",&hh,&mm);
a=(h*60)+(m);
b=(hh*60)+(mm);
c=a-b;
hr=c/60;
min=c%60;
printf("%dhr %dmin",hr,min);
return 0;
}
