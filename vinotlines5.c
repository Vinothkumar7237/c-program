#include <stdio.h>
 
int main() {
 
    int input;
    int linecount = 0;
    int charcount = 0;
 
    while ((input = getchar()) != EOF) {
 
        if (input == ' ') {
        }
        else if (input == '\n') {
            if (charcount > 3) {
               linecount++;
            }
            charcount = 0;
        }
        else {
            charcount++;
        }
    }
 
    printf("%d\n", linecount+1);
 
    return 0;
}
