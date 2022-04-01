#include <stdio.h>
int main()
{
	int a, b;
	printf("输入两个数字求最大公约数：");
	scanf_s("%d,%d", &a, &b);
	while (a != b)
	{
		if (a > b)
			a = a - b;
		else
			b = b - a;
	}
	printf("最大公约数为：%d\n", a);

	return 0;

}