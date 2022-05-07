#include "..\Header\Convert.h"

void DecimalToBinary(int num)
{
    long long binary = 0;
    int rem, tmp = 1;
    while(num != 0)
    {
        rem = num % 2;
        num /= 2;
        binary += rem * tmp;
        tmp *= 10;
    }
    printf("0b%lld",binary);
}

void DecimalToHex(int num)
{
    char hexnum[100];
    int i = 1;
    while( num != 0)
    {
        int tmp = num % 16;
        if (tmp < 10)
        {
            tmp = tmp + 48;
        }
        else
        {
            tmp = tmp + 55;
        }
        hexnum[i++] = tmp;
        num = num / 16;
    }
    printf("\n0x");
    for (int j = i -1; j > 0; j--)
    {
        printf("%c",hexnum[j]);
    }
}