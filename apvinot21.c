#include<stdio.h>
int main()
{
int a,n,d,sum,sum2;
printf("enter the starting number :");
scanf("%d",&a);
printf("enter the difference between the numbers :");
scanf("%d",&d);
printf("enter the number of terms :");
scanf("%d",&n);
sum=a+((n-1)*d);
sum2=(((a+sum)*n)/2);
printf("the sum of A.P. is %d",sum2);
return 0;
}
