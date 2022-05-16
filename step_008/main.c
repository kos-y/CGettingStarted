#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a, b;

	printf("何か数値を入力：");
	scanf("%d %d", &a, &b);

	printf("入力された数値は「%d」と「%d」ですね。\n", a, b);

	return 0;
}
