#include <stdio.h>

int add(int i, int j);

/* ƒƒCƒ“ŠÖ” */
int main()
{
    int sum;

    /* 1‚©‚ç10‚Ü‚Å‰ÁZ‚·‚é */
    sum = add(1, 10);

    printf("ŒvZŒ‹‰ÊF%d\n", sum);

    return 0;
}

/* i‚©‚çj‚Ü‚Å‰ÁZ‚µ‚ÄŒ‹‰Ê‚ğ–ß‚·ŠÖ” */
int add(int i, int j)
{
    int n, sum = 0;

    for (n = i; n <= j; n++)
    {
        sum += n;
    }

    return sum;
}


