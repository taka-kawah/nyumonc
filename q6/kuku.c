#include <stdio.h>
#include <string.h>

int main(void)
{
    for (size_t i = 1; i < 10; i++)
    {
        for (size_t j = 1; j < 10; j++)
        {
            char buf[3];
            snprintf(buf, sizeof(buf), "%2zu", i * j);
            printf("%s ", buf);
        }
        printf("\n");
    }
}