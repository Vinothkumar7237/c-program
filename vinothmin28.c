#include<stdio.h>
int main()
{
int min,hr,m;
printf("enter the minutes :");
scanf("%d",&min);
hr=min/60;
m=min%60;
printf("%dhr  %dmin",hr,m);
return 0;
}
