#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        printf("usage: max <num> <num>...");
        return 1;
    }

    int max = 0;
    unsigned int i;
    for (size_t i = 1; i < argc; i++)
    {
        int num = atoi(argv[i]);
        if (num > max || i == 1)
        {
            max = num;
        }
    }
    printf("%d\n", max);
}