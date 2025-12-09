#include <stdio.h>
#include <stdlib.h>

void swap(int arr[2])
{
    int temp = arr[0];
    arr[0] = arr[1];
    arr[1] = temp;
}

int main(int argc, char *argv[])
{
    if (argc != 3)
    {
        printf("usage: swap <num> <num>\n");
        return 1;
    }
    int arr[2] = {atoi(argv[1]), atoi(argv[2])};
    swap(arr);

    printf("%d %d\n", arr[0], arr[1]);
}
