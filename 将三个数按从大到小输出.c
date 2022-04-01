#include<stdio.h>

int main()
{
	int a = 0, b = 0, c = 0;
	int arr[3] = { a,b,c };
	scanf_s("%d,%d,%d", &arr[0], &arr[1], &arr[2]);//2,1,3
	if (arr[0] < arr[1])
	{
		int t;
		t = arr[0];
		arr[0] = arr[1];
		arr[1] = t;
	}
	if (arr[0] < arr[2])//6 5 4
	{
		int t;
		t = arr[0];
		arr[0] = arr[2];
		arr[2] = t;
	}
    if (arr[1] < arr[2])
	{
		int t;
		t = arr[1];
		arr[1] = arr[2];
		arr[2] = t;
	}
	for (int i = 0; i <= 2; i++) 
	{
		printf("%d ", arr[i]);
	}
	return 0;
}