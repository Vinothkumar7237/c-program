#include <stdio.h>
int main()
{
    int i, num, t1 = 1, t2 = 1, nextTerm;

    printf("Enter the number of terms: ");
    scanf("%d", &num);

    printf("Fibonacci Series: ");

    for (i = 1; i <= num; ++i)
    {
        printf("%d, ", t1);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
    return 0;
}