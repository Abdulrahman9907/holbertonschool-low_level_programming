#include <stdio.h>

int main(void)
{
    int x = 42;            // FIXED: Use integer instead of string
    /* undefined_func(); */ // FIXED: Comment out or define the function
    printf("%d is shit Hello World\n",x);
    return 0;              // FIXED: Already has semicolon
}
