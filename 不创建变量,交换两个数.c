#include<stdio.h>

int main()
{
	int x = 1, y = 2;
	x = x + y;
	y = x - y;
	x = x - y;
	printf("%d,%d", x, y);
}