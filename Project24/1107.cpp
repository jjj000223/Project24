#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a;
	printf("0~360�� �� ���ڸ� �Է��ϼ���: ");
	scanf_s("%d", &a);

	if (a > 0 && a < 90)
	{
		printf("1��и�\n");
	}
	else if (a == 0)
	{
		printf("���� X��\n");
	}
	else if (a > 90 && a < 180)
	{
		printf("2��и�\n");
	}
	else if (a == 90)
	{
		printf("���� Y��\n");
	}
	else if (a > 180 && a < 270)
	{
		printf("3��и�\n");
	}
	else if (a == 180)
	{
		printf("���� X��\n");
	}
	else if (a > 270 && a <= 360)
	{
		printf("4��и�\n");
	}
	else
		printf("���� Y��\n");
	return 0;
}