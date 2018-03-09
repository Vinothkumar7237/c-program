#include<stdio.h>
#include<string.h>
int main()
{
int num,i;
char str[49];
printf("enter the word and no. of times to print  :");
scanf("%s%d",&str,&num);
for(i=1;i<=num;i++)
{
printf("%s\n",str);
}
return 0;
}
