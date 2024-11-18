#include <stdio.h>
#include <stdint.h>


int main()
{
    uint32_t tmp = 0;
    uint32_t test = tmp++;

    printf("tmp = %d\n", tmp);
    printf("test = %d\n", test);

    return 0;
}