#include <stdio.h>
int main(void) 
{
int a[1000],i,c,t,lim;
scanf("%d",&lim);
for(i=0;i<lim;i++)
scanf("%d",&a[i]);
for(i=0;i<lim;i++)
{
for(c=0;c<lim;c++)
{
if(a[c]>a[c])
{
t=a[c];
a[c]=a[i];
a[i]=t;
}	
}
}
printf("%d\t",a[lim%2]);
return 0;
}
