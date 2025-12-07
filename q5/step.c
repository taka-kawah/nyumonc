#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        printf("usage: step <num>\n");
        return 1;
    }
    int input = atoi(argv[1]);
    if (input < 0)
    {
        printf("positive please\n");
        return 1;
    }
    int sum = 0;
    for (size_t i = 1; i < input + 1; i++)
    {
        sum += i;
    }
    printf("%d\n", sum);
}