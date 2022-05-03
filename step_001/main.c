#include <stdio.h>

int add(int i, int j);

/* メイン関数 */
int main()
{
    int sum;

    /* 1から10まで加算する */
    sum = add(1, 10);

    printf("計算結果：%d\n", sum);

    return 0;
}

/* iからjまで加算して結果を戻す関数 */
int add(int i, int j)
{
    int n, sum = 0;

    for (n = i; n <= j; n++)
    {
        sum += n;
    }

    return sum;
}


