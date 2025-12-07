#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        printf("usage: oddeven <num>");
        return 1;
    }
    if (atoi(argv[1]) % 2 > 0)
    {
        printf("奇数\n");
    }
    else
    {
        printf("偶数\n");
    }
}