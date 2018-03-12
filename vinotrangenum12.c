#include<stdio.h>
 
int main() {
    int num, min, max;
 
    printf("Enter an integer\n");
    scanf("%d", &num);
 
    if(num<10 && num>1)
    {
        printf("%d is in range of [1,10]", num);
    } else {
     printf("%d is not in range of [1,10]", num);
    }
 
    return 0;
}
