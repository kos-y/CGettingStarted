#include <stdio.h>

int add(int i, int j);

/* ���C���֐� */
int main()
{
    int sum;

    /* 1����10�܂ŉ��Z���� */
    sum = add(1, 10);

    printf("�v�Z���ʁF%d\n", sum);

    return 0;
}

/* i����j�܂ŉ��Z���Č��ʂ�߂��֐� */
int add(int i, int j)
{
    int n, sum = 0;

    for (n = i; n <= j; n++)
    {
        sum += n;
    }

    return sum;
}


