#include <stdio.h>
int main()
{
	int a, b;
	printf("�����������������Լ����");
	scanf_s("%d,%d", &a, &b);
	while (a != b)
	{
		if (a > b)
			a = a - b;
		else
			b = b - a;
	}
	printf("���Լ��Ϊ��%d\n", a);

	return 0;

}