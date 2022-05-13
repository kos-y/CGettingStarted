#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a;

	printf("何か数値を入力：");
	scanf("%d", &a);

	printf("入力された数値は「%d」ですね。\n", a);

	return 0;
}
