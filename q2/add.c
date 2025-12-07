#include <stdio.h>

int main(void)
{
    int a;
    printf("number 1: ");
    scanf("%d", &a);
    int b;
    printf("number 2: ");
    scanf("%d", &b);
    printf("%d + %d = %d\n", a, b, a + b);
    char *goodbye = "good bye!";
    printf("%s\n", goodbye);
    return 0;
}