#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a;
	printf("0~360도 중 숫자만 입력하세요: ");
	scanf_s("%d", &a);

	if (a > 0 && a < 90)
	{
		printf("1사분면\n");
	}
	else if (a == 0)
	{
		printf("양의 X축\n");
	}
	else if (a > 90 && a < 180)
	{
		printf("2사분면\n");
	}
	else if (a == 90)
	{
		printf("양의 Y축\n");
	}
	else if (a > 180 && a < 270)
	{
		printf("3사분면\n");
	}
	else if (a == 180)
	{
		printf("음의 X축\n");
	}
	else if (a > 270 && a <= 360)
	{
		printf("4사분면\n");
	}
	else
		printf("음의 Y축\n");
	return 0;
}