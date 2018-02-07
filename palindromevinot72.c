#include<stdio.h>
int main()
{
int num,a,b,c,d,e;
printf("enter the number less than or equal to 1000 :");
scanf("%d",&num);
a=num/100;
b=num%100;
c=b/10;
d=num%10;
e=d*100+c*10+a;
if(num==e)
{
printf("palindrome");
}
else
{
printf("not a palindrome");
}
return 0;
}
