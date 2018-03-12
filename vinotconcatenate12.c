#include <stdio.h>
int main()
{
    char s1[100], s2[100], a, j;

    printf("Enter first string: ");
    scanf("%s", s1);

    printf("Enter second string: ");
    scanf("%s", s2);

    // calculate the length of string s1
    // and store it in a
    for(a = 0; s1[a] != '\0'; ++a);

    for(j = 0; s2[j] != '\0'; ++j, ++a)
    {
        s1[a] = s2[j];
    }

    s1[a] = '\0';
    printf("After concatenation: %s", s1);

    return 0;
}
