#include<stdio.h>

int main()
{
	int arr[10] = { 7,5,8,6,4,2,1,3,8,9 };
	int MAX;
	for (int i = 0; i <= 9; i++) 
	{
		if (arr[i] > arr[i + 1]) {
			MAX = arr[i];
		}
	}
	printf("%d", MAX);
    return 0;
}