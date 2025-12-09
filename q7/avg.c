#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        printf("usage: avg <num>, <num>...");
        return 1;
    }
    double sum = 0;
    for (size_t i = 1; i < argc; i++)
    {
        sum += atoi(argv[i]);
    }
    printf("%lf\n", sum / (argc - 1));
}